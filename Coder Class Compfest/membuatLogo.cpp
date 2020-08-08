#include<bits/stdc++.h>
using namespace std;

int main(){
int a ,b ,c;

cin>>a>>b>>c;
int d= a-(2 *c);

for(int i=0 ;i<c ;i++){
    for(int j=0 ;j<b ;j++){
        cout<<"*";
    }
    cout<<endl;
}

int pembatas=0;
for(int i=0 ;i<d;i++){
    for(int j =0; j<b ; j++){
        if(pembatas<c){
            cout<<"*";
            pembatas+=1;
        }else{
            cout<<".";
        }
    }
    pembatas=0;
    cout<<endl;
}

for(int i=0 ;i<c ;i++){
    for(int j=0 ;j<b ;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
