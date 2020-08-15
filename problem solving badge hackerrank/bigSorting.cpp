#include <bits/stdc++.h>

using namespace std;

// Complete the bigSorting function below.

bool perbandingan(string s1, string s2){
    return s1.size() <s2.size();
}
vector<string> bigSorting(vector<string> unsorted)
    //sorting yang dibawah ini, akan mengurutkan bergantung pada angka depannya
    sort(unsorted.begin(), unsorted.end());

    //nah sorting yang ini, akan mengurutkan berdasarkan panjang vectornya dan juga akan mempertahankan nilai yang sebelumnya
    //sehingga akan didapatkan hasil yang diinginkannn
    stable_sort(unsorted.begin(), unsorted.end(), perbandingan);
    return unsorted;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
