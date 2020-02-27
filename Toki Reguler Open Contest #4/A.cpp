#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,c,x=2;
bool f =true;
cin>>a>>b>>c;

while(f== true){
    if(x%b >0 && x%a >0 &&x %c >0){
        cout<<x<<endl;
        f = false;
    }else{
    x = x+1;
    }
}

}
