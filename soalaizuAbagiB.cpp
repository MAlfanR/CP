#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int  a , b , c;
	int r ;
	double p , q;
	
	double f;
	
	cin>>a>>b;
	
	p=a;
	q=b;
	f= p/q;
	r=a/b;
	c=a%b;
	

	cout<<r<<" "<<c<<" "<<fixed<<setprecision(5)<<f<<endl;
	
	return 0;
}
