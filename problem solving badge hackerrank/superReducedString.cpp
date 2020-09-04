#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
void superReducedString(string s) {

for(int i=0 ;i<(((int)s.length())-1); i++){
    if(s[i]==s[i+1]){
        s.erase(i,2);
        i=-1;
    }
}

if(s.length()>0){
    cout<<s<<endl;
}else{
    cout<<"Empty String"<<endl;
}
}

int main()
{


    string s;
    getline(cin, s);

    superReducedString(s);

}
