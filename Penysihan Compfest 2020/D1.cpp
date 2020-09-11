#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>


typedef uintmax_t UInt;
#define UIntFormat PRIuMAX

#define NumberOf(a) (sizeof (a) / sizeof *(a))


/*  In this code, a multiset is represented with:

        an integer N0 which is the number of types of elements in the set,

        an integer N1 which is the number of types of elements in the set that
        each appear finitely many times (N0-N1 types each appear infinitely
        many times), and

        an array M[] in which each M[i] is the number of times that an element
        of type i appears.

    Collectively, this is referred to as the multiset M.
*/


/*  Return the number of ways to choose r things from n things.  This is
    n! / (r! * (n-r)!).
*/
static UInt Choose(UInt r, UInt n)
{
    UInt result = 1;
    for (UInt i = 1; i <= r; ++i)
        result = result * n-- / i;
    return result;
}


//  Count the number of r-combinations of a multiset.
static UInt CountRCombinations(UInt r, size_t N0, size_t N1, UInt M[])
{
    /*  If we have only the unlimited types, there is a one-to-one
        correspondence between r objects with N0-1 dividers placed between
        them, each divider marking a transition from one type to another.  For
        example, consider four objects of three types.  Below "o" represents
        any object, and "|" is a divider.  For each arrangement of four o's and
        two |s, we show how it defines a selection of four objects of three
        types:

            oooo|| -> aaaa||
            ooo|o| -> aaa|b|
            ooo||o -> aaa||c
            oo|oo| -> aa|bb|
            oo|o|o -> aa|b|c
            oo||oo -> aa||cc
            o|ooo| -> a|bbb|
            o|oo|o -> a|bb|c
            o|o|oo -> a|b|cc
            o||ooo -> a||ccc
            |oooo| -> |bbbb|
            |ooo|o -> |bbb|c
            |oo|oo -> |bb|cc
            |o|ooo -> |b|ccc
            ||oooo -> ||cccc

        Therefore, the number of combinations equals the number of ways to
        arrange r indistinguishable objects of one type with N0-1
        indistinguishable objects of a different type.
    */
    if (N1 == 0)
        return Choose(r, r+N0-1);

    /*  Otherwise, we count the combinations:

            Select one of the limited types (we use the last one, N1-1, because
            it is easily removed from the array simply by reducing the size of
            the array).

            Count the number of combinations there would be if that type were
            unlimited.

            Count the number of combinations there would be if there were at
            least M[i]+1 instances of elements of that type.

            Subtract to get the number of combinations that have 0 to M[i]
            instances of elements of that type.
    */
    else
    {
        /*  Let M' be the multiset M with the last type changed to unlimited.

            So, where M is represented with N0, N1, M[], M' is represented with
            N0, N1-1, M[].
        */

        //  Change the last limited type to unlimited.
        N1 -= 1;

        //  Count the r-combinations drawn from M'.
        UInt C = CountRCombinations(r, N0, N1, M);

        /*  Now we count the combinations which have at least M[N1]+1 instances
            of the (formerly) last type.

            Consider that each such combination has M[N1]+1 instances of that
            type plus some combination of r - (M[N1]+1) elements drawn from M',
            including zero or more instances of the last type.  (Note that if r
            <= M[N1], there are no such combinations, since we would be asking
            for a negative number of elements.)

            So the number of combinations which have at least M[N1]+1 instances
            of the last type equals the number of combinations of that type
            plus some combination of r - (M[N1]+1) elements drawn from M'.
        */
        if (M[N1] < r)
            C -= CountRCombinations(r - (M[N1] + 1), N0, N1, M);

        return C;
    }
}


//  Count the number of splits of a multiset M that contains N types of things.
static UInt CountSplits(size_t N, UInt M[])
{
    //  Count the number of elements.
    UInt T = 0;
    for (size_t i = 0; i < N; ++i)
        T += M[i];

    //  Return the number of T/2-combinations of M.
    return T % 2 ? 0 : CountRCombinations(T/2, N, N, M);
}


int main(void)
{
    UInt M[] = { 3, 4, 5 };
    size_t N = NumberOf(M);

    printf("The number of splits of {");
    for (size_t i = 0; i < N; ++i) printf(" %" UIntFormat, M[i]);
    printf(" } is %" UIntFormat ".\n", CountSplits(N, M));
}
