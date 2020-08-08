#include<bits/stdc++.h>
using namespace std;

int main(){
string s;

cin>>s;

if(s=="0"){
    cout<<"nol"<<endl;
}else if(isalpha(s[0])){
    cout<<"kata"<<endl;
}else if(s[0]=='-'){
    cout<<"bilangan bulat negatif"<<endl;
}else{
    cout<<"bilangan bulat positif"<<endl;
}
}
