#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
string result="";
for(int i=0 ; i<s.length(); i++){
    if(islower(s[i])){
        result+=char(int(s[i]+k-97)%26+97);
    }else if(isupper(s[i])){
        result+=char(int(s[i]+k-65)%26+65);
    }else{
        result+=s[i];
    }
}
return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
