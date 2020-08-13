#include<bits/stdc++.h>
using namespace std;

int DAC_Max(int a[], int index, int l);

int DAC_Max(int a[], int index , int l){
int max;

if(index >= l-2){
    if(a[index] > a[index+1])
        return a[index];
    else
        return a[index+1];
}
max = DAC_Max(a,index + 1, l);

if(a[index] > max)
    return a[index];
else
    return max;
}


int main(){

int min, max, N;

int a[7] ={70,250,50,80,140,12,14};

max = DAC_Max(a,0,7);

printf("The maximum number in a given array is : %d", max);
}
