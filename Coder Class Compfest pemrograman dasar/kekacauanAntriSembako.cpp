#include<bits/stdc++.h>
using namespace std;

int main(){
list<string>antrian;
list<string>disimpan;

int n;
cin>>n;

int x;
string s;
for(int i=0;i<n;i++){
    cin>>x;

    if(x==1){
        cin>>s;
        for (auto it = disimpan.begin(); it != disimpan.end(); ++it) {
        if(s==*it)
            continue;
        }
        antrian.push_front(s);
    }else if(x==2){
        cin>>s;
        for (auto it = disimpan.begin(); it != disimpan.end(); ++it) {
        if(s==*it)
            continue;
        }
        antrian.push_back(s);
    }else if(x==3){
        disimpan.push_back(antrian.front());
        cout<<antrian.front()<<endl;
        antrian.pop_front();
    }else if(x==4){
        disimpan.push_back(antrian.back());
        cout<<antrian.back()<<endl;
        antrian.pop_back();
    }
}


}
