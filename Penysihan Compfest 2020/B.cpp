#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;

int main(){

lli a,b, c, simpan4, x, simpan5, minimum, maksimumMinimal;

cin>>a>>b;



//mencari minimum
simpan4 = 4 * b;
x= a - simpan4;
if(x <=0){
    minimum = 0;
}else{
    minimum = x;
}

//mencari maksimum

c = a/5;
simpan5 = 5 * b;

maksimumMinimal = a- b;
if(maksimumMinimal<4){
    c=0;
}

//jawaban
if(a<b){
    cout<<-1<<" "<<-1<<endl;
}else if(simpan5 < a){
    cout<<-1<<" "<<-1<<endl;
}else{
    cout<<minimum<<" "<<c<<endl;
}

}
