#include<iostream>
using namespace std;

int main (){
	int A;
	int B;
	int D;
	int C;
	
	cin >> A >> B >> C;
	int temp;
	
	if (B>A && B>C){
		temp = A;
		A=B ;
		B=temp;
	}else if (C>A && C>B){
		temp = A;
		A = C ;
		C = temp;
	}
	
	D = B + C;
	
	while (A >0 ){
		A= A-4; 
		D= D-3;
}
		if (A==0 && D==0){
			cout<< "YA"<<endl;
		}else {
			cout<< "TIDAK"<<endl;
		}
	
	return 0;
}
