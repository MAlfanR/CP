#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {

sort(s.begin(), s.end());


int arr[26] = {0};
int x;
int sum=0;
for(int i=0 ; i<s.size(); i++){
    x = int(s[i]-97);
    arr[x]+=1;
}

for(int i=0 ; i<26; i++){
    if(arr[i]%2==1){
        sum+=1;
    }
}

if(sum<2){
    return "YES";
}else{
    return "NO";
}


// if(s.size()%2==1){
//     for(int i=0 ; i<s.size()-1 ; i+=2){
//         if(s[i]!=s[i+1]){
//             return "NO";
//         }
//     }
//     return "YES";
// }else{
//       for(int i=0 ; i<s.size() ; i+=2){
//         if(s[i]!=s[i+1]){
//             return "NO";
//         }
//     }
//     return "YES";
// }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
