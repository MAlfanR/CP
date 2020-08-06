#include <bits/stdc++.h>

using namespace std;


// Complete the breakingRecords function below.




int main(){
int n;
cin>>n;

int scores[n];
for(int i=0 ;i<n ;i++){
    cin>>scores[i];
}


int max = scores[0];
int min = scores[0];
int sumMax=0;
int sumMin=0;

for(int i=1 ;i<n; i++){
    if(scores[i]>max){
        sumMax+=1;
        max = scores[i];
    }else if(scores[i]<min){
        sumMin+=1;
        min = scores[i];
    }
}

cout<<sumMax<<" "<<sumMin<<endl;
return 0;

}
