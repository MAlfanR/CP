#include<bits/stdc++.h>
using namespace std;

int main(){

string a, b, c;
int i;

cin>>a>>b;

cout<<a.size()<<" "<<b.size()<<endl;
c = a+b;
cout<<c<<endl;

cout<<b[0];

for(i=1 ; i <a.size() ; i++){
    cout<<a[i];
}
cout<<" "<<a[0];

for(i=1; i<b.size() ; i++){
        cout<<b[i];
}
cout<<endl;

}
