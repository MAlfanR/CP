#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    map<string, long int> m;
    int n;
    string s;
    long int nomor;
    cin>>n;

    for(int i=0 ;i<n ; i++){
        cin>>s;
        cin>>nomor;

        m.insert(pair<string,long int>(s, nomor));
    }

    string kata;
    int q=0;

    while(cin>>kata){
        auto it = m.find(kata);

        if(it->first==kata){
            cout<<it->first<<"="<<it->second<<endl;
        }else{
             cout<<"Not found"<<endl;
        }
    }
    return 0;
}
