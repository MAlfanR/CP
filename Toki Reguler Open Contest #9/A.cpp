#include<bits/stdc++.h>

using namespace std;



int main(){

string s;

int i, sum=0;

cin>>s;



int n = s.length();

char char_array[n+1];

strcpy(char_array, s.c_str());



for(i=0 ; i<n; i++){

    if(char_array[i]=='O'){

        sum = sum+1;

    }

}



if (sum==1){

    cout<<"Ya"<<endl;

}else{

    cout<<"Tidak"<<endl;

}

}

