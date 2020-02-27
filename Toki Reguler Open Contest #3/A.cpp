#include<iostream>
using namespace std;
int main (){
int A,B , C , X ,temp;
int sum = 0 , ba=0;
	cin >> X;
	bool berhenti = false;
	cin >> A >> B >> C;
	if (B < A){
		temp = A ;
		A=B;
		B=temp;
	}
    if (C < B){
    temp=B;
    B=C;
    C=temp;
    }
    if (B < A){
    temp = A ;
    A=B;
    B=temp;
    }
    while (X >=0 && berhenti==false ){
        if (X-A >= 0){
            X=  X-A;
            ba = ba+1;
	}else berhenti=true;
	if(X-B >= 0){
 	X = X-B;
    ba= ba +1 ;
	}else
	berhenti = true;

	if(X-C >= 0){
 	X= X-C;
 	ba= ba+1;
 }else berhenti = true;
 }
cout<< ba<<endl;
	return 0;

}

