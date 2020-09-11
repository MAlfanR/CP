#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong
    int num =0 , low = 0 , upp= 0, spec = 0, sum=0;
    int simpan= s.size();
    for(int i=0 ; i<simpan ; i++){
        if(isdigit(s[i])){
            num+=1;
        }else if(isalpha(s[i])){
            if(isupper(s[i])){
                upp+=1;
            }else{
                low+=1;
            }
        }else{
            spec+=1;
        }
    }

    if(num==0){
        sum+=1;
    }

    if(low == 0){
        sum+=1;
    }

    if(upp ==0){
        sum+=1;
    }

    if(spec==0){
        sum+=1;
    }
    int c= 6 - simpan;
    int aa=0;
    if(s.length() <6){
        if(c>=4){
            return c ;
        }else{
            if(sum>c){
                return sum;
            }else{
                return c;
            }
        }
    }else{
        return sum;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
