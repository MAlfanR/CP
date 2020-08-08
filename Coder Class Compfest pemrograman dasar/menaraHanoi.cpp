#include<bits/stdc++.h>
using namespace std;

void towerHanoi(int n,string awal, string akhir, string tengah){
    if(n==1){
        cout<<1<<" "<<awal<<" "<<akhir<<endl;
        return ;
    }else{
        towerHanoi( n-1, awal,  tengah,  akhir);
        cout<<n<<" "<<awal<<" "<<akhir<<endl;
        towerHanoi( n-1, tengah,  akhir,  awal);
    }
}
int main(){
int n;
cin>>n;

towerHanoi(n, "A","C","B");

return 0;
}
