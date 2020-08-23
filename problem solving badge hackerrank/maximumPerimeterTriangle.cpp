#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maximumPerimeterTriangle function below.
void maximumPerimeterTriangle(vector<long int> sticks) {

sort(sticks.begin(), sticks.end(),greater<int>());
int x = 0;
for(int i=0 ; i<sticks.size()-2 ; i++){
    if(sticks[i]< sticks[i+1] + sticks[i+2]){
        cout<<sticks[i+2]<<" "<<sticks[i+1]<<" "<<sticks[i]<<endl;
        x=1;
        break;
    }
}

if(x==0){
cout<<-1<<endl;
}

}

int main(){

 int n,x;
 cin>>n;

 vector<long int> v;

 for(int i=0 ;i< n ; i++){
     cin>>x;
     v.push_back(x);
 }

    maximumPerimeterTriangle(v);

}
