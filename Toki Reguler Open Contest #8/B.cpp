#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
long long int i,sumb=0,sumo=0,sumn=0;
cin>>s;

for(i=0 ;i<s.size(); i++){
    if(s[i]=='b'){
        sumb=sumb+1;
    }else if(s[i]=='o'){
    sumo= sumo+1;
    }else if(s[i]=='n'){
    sumn=sumn+1;
    }
}

if(sumb<2 || sumo<2 ||sumn<2){
    cout<<0<<endl;
}else if(sumb<=sumo && sumb<=sumn){
sumb = sumb-1;
cout<<sumb<<endl;
}else if(sumo<=sumb && sumo<=sumn){
sumo = sumo-1;
cout<<sumo<<endl;
}else{
sumn = sumn-1;
cout<<sumn<<endl;
}

}
