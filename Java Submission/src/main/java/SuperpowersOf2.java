import java.util.*;
import java.math.*;
public class SuperpowersOf2
{
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int a= scan.nextInt();
        BigInteger b = scan.nextBigInteger();
        BigInteger p1 = new BigInteger("2");

        BigInteger p2 = p1.pow(a);
        p1 = p1.modPow(p2,b);
        System.out.println(p1);
    }
}