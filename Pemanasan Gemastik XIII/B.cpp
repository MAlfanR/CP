#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;
ulli modulo =1000000007;


/*
Rumus
deret aritmatika  -> Sn = n/2 (a + b)

rumus modulo
(a+b)mod m = (a mod m + b mod m) mod m
(a-b)mod m = (a mod m - b mod m) mod m
(a*b)mod m = (a mod m * b mod m) mod m
*/
int main(){

ulli a, b, n, sum, mod=0, totalPenambahan;
cin>>a>>b;

//mencari panjang deret
n = b-a+1;

//jika bilangannya ganjil , karena ketika ganjil dibagi genap dan disimpan di int, maka akan terjadi pembulatan ke bawah
if(n%2==1){
    mod+=1;
}

//menggunakan modulo agar angka tidak melebihi 10 pangkat 18
totalPenambahan = (a% modulo + b % modulo)% modulo;
sum = ( (n/2)% modulo * totalPenambahan % modulo) %modulo;

//cek apakah angka ganjil dengan lihat sisanya
if(mod==1){
    mod = 0.5 * totalPenambahan;
}

//total
sum = (sum + mod) % modulo;
cout<<sum<<endl;
}
