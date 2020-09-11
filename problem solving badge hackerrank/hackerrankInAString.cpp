#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

char arr[10] ={'h','a','c','k','e','r','r','a','n','k'};
int sum=0;

for(int i=0 ; i<s.size(); i++){
    if(s[i]==arr[sum]){
        sum+=1;
    }

    if(sum==9){
        return "YES";
    }
}
return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
