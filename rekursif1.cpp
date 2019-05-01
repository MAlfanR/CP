#include<iostream>
using namespace std;

//program a pangkat b

int rekursif (int a, int b ){
	if (b==1){
		return a;
	} else {
		return a * rekursif (a,b-1);
	}
}

int main(){
	int a , b;
	cout<<"Masukkan bilangan bulat :"<<endl;
	cin>>a;
	cout<<"Masukkan bilangan pangkat"<<endl;
	cin>>b;
	
	cout<< "Hasil dari :"<<a<<" pangkat "<<b<<" = "	<<rekursif (a,b);
}
