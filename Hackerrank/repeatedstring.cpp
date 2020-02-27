#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

string x =s;
long long int sum=0, q, sun=0;

long long int hasil, mod;
q = x.length();

for(long long int i=0 ;i<x.length() ; i++){
    if(x[i]=='a'){
        sum = sum+1;
    }
}

mod = n%q;

for(long long int i=0 ; i<mod ;i++){
    if(x[i]=='a'){
        sun = sun+1;
    }
}

hasil = (n/q) * sum + sun;

return hasil;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
