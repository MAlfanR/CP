#include<bits/stdc++.h>

using namespace std;



int main(){

unsigned long long int a,b,c, x, sum;



cin>>a>>b>>c;



sum = max(a , max(b,c));



if (sum==2){

    cout<<"Tidak"<<endl;

} else if(sum ==a){

    if(b==c){

        x= sum-b;

        if(x==1){

            cout<<"Ya"<<endl;

        }else{

            cout<<"Tidak"<<endl;

        }

    }else{

        cout<<"Tidak"<<endl;

    }

}else if(sum ==b){

    if(a==c){

        x= sum-a;

        if(x==1){

            cout<<"Ya"<<endl;

        }else{

            cout<<"Tidak"<<endl;

        }

    }else{

        cout<<"Tidak"<<endl;

    }

}else{



    if(b==a){

        x= sum-b;

        if(x==1){

            cout<<"Ya"<<endl;

        }else{

            cout<<"Tidak"<<endl;

        }

    }else{

        cout<<"Tidak"<<endl;

    }

}

}

