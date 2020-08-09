#include<bits/stdc++.h>
using namespace std;

int main(){
queue<string>q;

int n;
cin>>n;

int x;
string s;
for(int i=0;i<n;i++){
    cin>>x;

    if(x==1){
        cin>>s;
        q.push(s);
    }else{
        cout<<q.front()<<endl;
        q.pop();
    }
}


}
