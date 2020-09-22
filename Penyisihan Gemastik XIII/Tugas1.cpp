#include<bits/stdc++.h>
using namespace std;

void caesarChiper(){
    cin.ignore(256, '\n');
    string chiperText="";
    string plainText;
    int geser;
    cout<<"Inputkan teks (plainteks) melalui keyboard Anda: "<<endl;
    getline(cin,plainText);
    cout<<"Masukkan pergeseran huruf yang Anda inginkan :\n";
    cin>>geser;


    for(int i=0 ; i<plainText.size(); i++){
        chiperText += char(int(plainText[i]+geser)%256);
    }
    cout<<chiperText<<endl;
}

void transposisiCipher(){
    cin.ignore(256, '\n');
    string chiperText="";
    string plainText;
    int baris;
    cout<<"Inputkan teks (plainteks) melalui keyboard Anda: "<<endl;
    getline(cin,plainText);
    cout<<"Masukkan baris huruf yang Anda inginkan :\n";
    cin>>baris;

    //int arr[plainText.size()];
    //int i=0;
    //int x = plainText.size();
    //x= x
    for(int i=0 ; i<baris; i++){
        for(int j=i; j<plainText.size(); j+=baris){
            chiperText+=plainText[j];
        }
    }
    cout<<chiperText<<endl;
}

void superEnkripsi(){
    cin.ignore(256, '\n');
    string chiperText="", temp="";
    string plainText;
    int geser, baris;
    cout<<"Inputkan teks (plainteks) melalui keyboard Anda: "<<endl;
    getline(cin,plainText);
    cout<<"Masukkan pergeseran huruf yang Anda inginkan :\n";
    cin>>geser;
    cout<<"Masukkan baris huruf yang Anda inginkan :\n";
    cin>>baris;
    for(int i=0 ; i<plainText.size(); i++){
        temp += char(int(plainText[i]+geser)%256);
    }

    for(int i=0 ; i<baris; i++){
        for(int j=i; j<temp.size(); j+=baris){
            chiperText+=temp[j];
        }
    }
    cout<<chiperText<<endl;

}

int main(){
int n;
n=1;
while(n>0 && n<4){
    cout<<"MENU PROGRAM"<<endl;
    cout<<"1. Caesar Cipher"<<endl;
    cout<<"2. Transposisi Cipher"<<endl;
    cout<<"3. Caesar Cipher + Tranposisi Cipher"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"Masukkan angka untuk melakukan program yang Anda inginkan: "<<endl;
    cin>>n;

    if(n==1){
        caesarChiper();
    }else if(n==2){
        transposisiCipher();
    }else if(n==3){
        superEnkripsi();
    }else{
        break;
    }

}
cout<<"SELESAI"<<endl;
return 0;
}
