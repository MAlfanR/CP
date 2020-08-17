#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int x;
    int qq;
    int ww=1;
    for(int i=0 ;i<n ;i++){
        cin>>x;
        if(x<2){
            cout<<"Not prime"<<endl;
        }else{
        for(int j=2 ; j<=sqrt(x); j++){
            if(x%j==0){
                ww = 0;
                break;
            }

        }
       // cout<<ww<<endl;
        if( ww==1){
            cout<<"Prime"<<endl;
        }else{
            cout<<"Not prime"<<endl;
        }

        ww=1;

    }
    }
    return 0;
}
