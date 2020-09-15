#include<bits/stdc++.h>
using namespace std;

int main(){
int x, y;
string a;

cin>>x>>y;

cin>>a;

for(int i=0 ; i<a.size(); i++){
    if(a[i]=='u'){
        y-=1;
    }else if(a[i]=='t'){
        x-=1;
    }else if(a[i]=='s'){
        y+=1;
    }else{
        x+=1;
    }
}

cout<<x<<" "<<y<<endl;

}
