#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    vector<pair<int,int>>graf;
    set<pair<int, int>> s;
    int n, a, b, x, y;
    cin>>n;
    cin>>a;
    for(int i=0 ;i<a ; i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        s.insert(make_pair(x,y));
    }
    cin>>b;
    for(int i=0 ;i<b ; i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        s.insert(make_pair(x,y));
    }

     for (auto const &var : s) {
      cout << "(" << var.first << ", "<< var.second << ")"<< " ";
    }


}
