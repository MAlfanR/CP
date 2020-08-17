#include <bits/stdc++.h>

using namespace std;



int main(){
  int n, j , k, simpan, hasilAkhir=0;
  cin>>n;

  for(int i=0 ;i<n ;i++){
    cin>>j>>k;

    for(int q=1 ;q<k ; q++){
        for(int w=1+q ; w<=j ; w++){
            simpan = q & w;
            if(simpan<k && simpan>hasilAkhir){
                hasilAkhir = simpan;
            }
        }
    }
    cout<<hasilAkhir<<endl;
    hasilAkhir=0;
  }
}
