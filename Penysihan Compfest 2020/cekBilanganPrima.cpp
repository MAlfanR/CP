#include <bits/stdc++.h>
using namespace std;

int main(){

cout<<"Ini tuh masukan pengguna : "<<endl;

int masukkan, qq =1;
cin>>masukkan;

cout<<"Cek bilangan prima"<<endl;
cout<<masukkan<<" adalah bilangan: ";
for(int i=2 ;i<=masukkan; i++ ){
    if(masukkan%i==0){
        cout<<"Bukan Prima"<<endl<<endl;
        cout<<"I Love Fira "<<endl;
        return 0;
        break;
    }
}

cout<<"Prima"<<endl<<endl;
cout<<"I Love Fira "<<endl;
return 0;
}
