#include<bits/stdc++.h>
#define M using
#define Alfan namespace
#define Riyadi std

M Alfan Riyadi;

int main(){

string s,p;
cin>>s;
cin>>p;

int n=s.length(),x=p.length(),j,i;

char arrays[n+1],arrayp[x+1];

strcpy(arrays,s.c_str());
strcpy(arrayp,p.c_str());

//int A=sizeof(arrays)/sizeof(arrays[0]);
//sort(arrays,arrays+A);

//int B=sizeof(arrayp)/sizeof(arrayp[0]);
//sort(arrayp,arrayp+B);

vector <char> y;
vector<char>z;


for(i=0;i<n;i++){
    y.push_back(arrays[i]);
    cout<<y[i]<<endl;
}
for(i=0 ;i<x;i++){
    z.push_back(arrayp[i]);
    cout<<z[i]<<endl;
}
cout<<z.size()<<endl;

int sum=0;
int sya=0;
for(auto it= z.begin();it!=z.end();it++){
    for(auto fan=y.begin();fan!=y.end();fan++){
        if(*it==*fan){
            sum=sum+1;
         //   y.erase(fan);
         //   z.erase(it);
            break;
        }else{
            break;
        }
    }


}
cout<<sum<<endl;
/*
for(i=0;i<x;i++){
    for(j=0;j<n;j++){
        if(z[i]==y[j]){
            sum=sum+1;
            y.erase(j);
            break;
        }else{
        break;
        }
    }

    if(sum!=i){
        break;
    }
}
*/
cout<<z.size()<<endl;
if(sum==z.size()){
cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}

}
