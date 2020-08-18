#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int sum=0, sun=0;
     if(p==1){
         return 0;
     }
     if(p==n){
         return 0;
     }

     if(p==n-1 && n%2==1){
         return 0;
     }

    for(int i=2 ;i<=n ; i+=2){
        sum+=1;
        if(p==i || p==i+1){
            break;
        }
    }
    if(n%2==1){
    for(int i=n-2 ; i>=1 ; i-=2){
        sun+=1;
        if(p==i || p==i-1){
            break;
        }
    }
    }else{
        for(int i=n-1 ; i>=1 ; i-=2){
        sun+=1;
        if(p==i || p==i-1){
            break;
        }
    }
    }

    if(sum<=sun){
        return sum;
    }else{
        return sun;
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
