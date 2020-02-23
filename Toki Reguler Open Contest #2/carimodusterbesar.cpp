#include <bits/stdc++.h>
using namespace std;

int main(){

int n, x=-1, sum =0, sun, simpan=-1;
vector<int> v;

while(cin>>n){
    if(n==0){
        sort(v.begin(), v.end());
        for(int i=0 ;i<v.size(); i++){
            if(x==v[i]){
                sum+=1;
            }else{
                x=v[i];
                if(sum>=sun){
                    sun=sum;
                    simpan= x;
                }
            }

        }
        cout<<simpan<<endl;
    }
    v.push_back(n);
}



}
