#include<iostream>
using namespace std;

int main(){
	int A , B , C , D , E , F , G , H;
	
	cin>>A;
	cin>>B;
	
	cin>>C;
	cin>>D;
	
	
	E=A/C;
	F=B/D;
	
	G=A/D;
	H=B/C;
	
	
	
	if (E*F > G*H ){
		cout<< E *F<<endl;
	}else {
	cout<<	G*H <<endl;
	}
	
	
}
