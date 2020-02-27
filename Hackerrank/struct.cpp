#include<bits/stdc++.h>
using namespace std;

struct orang{
int umur;
string namadepan;
string namabelakang;
int standar;
};
int main(){

orang x;

cin>>x.umur;
cin>>x.namadepan;
cin>>x.namabelakang>>x.standar;

cout<<x.umur<<" ";
cout<<x.namadepan<<" ";
cout<<x.namabelakang<<" ";
cout<<x.standar<<endl;


return 0;
}
