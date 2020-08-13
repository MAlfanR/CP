#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int>v;
    vector<int>x;

    int sisabagi =0;
    while(n>0){
        sisabagi = n%2;
        n = n/2;
        v.push_back(sisabagi);
    }
    int sun=0;
    for(int i=0 ; i<v.size(); i++){
        if(v[i]==1){
            sun=sun+1;
            if(i==v.size()-1){
                x.push_back(sun);
            }
        }else{
            x.push_back(sun);
            sun=0;
        }
    }

     sort(x.begin(), x.end(), greater<int>());

     cout<<x[0]<<endl;
    return 0;
}
