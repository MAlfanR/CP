#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;

/*
kuncinya adalah cek seluruh kemungkinan yang terjadi
misalnya x1 dan y1 bisa negatif ataupun positif, begitu juga dengan titik yang lain
*/
int main(){

int x1,y1,x2,y2, simpanX , simpanY, sum;

cin>>x1>>y1;
cin>>x2>>y2;



//ini adalah cek seluruh kemungkinan yang terjadi
// fungsi abs adalah fungsi absolute, jika nilai yang dihasilkan negatif akan menjadi positif

if(x1>=0 && x2>=0){
    simpanX = abs(x1-x2);
}else if(x1 >=0 && x2 <0){
    simpanX = x1 - x2;
}else if(x1 <0 && x2 >=0){
    simpanX = x2-x1;
}else{
    x1 = abs(x1);
    x2 = abs(x2);
    simpanX = abs(x1-x2);
}

if(y1>=0 && y2>=0){
    simpanY = abs(y1-y2);
}else if(y1 >=0 && y2 <0){
    simpanY = y1 - y2;
}else if(y1 <0 && y2 >=0){
    simpanY = y2-y1;
}else{
    y1 = abs(y1);
    y2 = abs(y2);
    simpanY = abs(y1-y2);
}

sum = simpanX + simpanY;

cout<<sum<<endl;


}
