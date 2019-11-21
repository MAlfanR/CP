#include<bits/stdc++.h>
using namespace std;

int main(){
double r,v;
long long int n,i;
int sum=0;
bool qq = true;
vector <int> ww;
cin>>n>>r>>v;
double arr[n], hasil;
for(i=0 ;i<n ;i++){
    cin>>arr[i];
    if(arr[i]==v){
        qq =false;
    }

    sum =arr[i]-v;
    if(sum <0){
        sum = sum*-1;
        ww.push_back(sum);
    }else{
        ww.push_back(sum);
    }

}

sort(ww.begin(), ww.end());

if(qq==false){
    cout<<-1<<endl;
}else{
    hasil = r/ww[0];
    cout<<fixed<<setprecision(10)<<hasil<<endl;
}



}
