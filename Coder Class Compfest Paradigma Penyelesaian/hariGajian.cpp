#include<bits/stdc++.h>
using namespace std;

int deno[] = { 1, 2, 5, 10, 20,50, 100 };
int n = sizeof(deno) / sizeof(deno[0]);

void findMin(unsigned long long int V)
{
    sort(deno, deno + n);
    unsigned long long int simpan;
    int banyaknya=0;
    vector<unsigned long long int> ans;
    vector<unsigned long long int>gg;
    for (int i = n - 1; i >= 0; i--) {
        while (V >= deno[i]) {
            banyaknya+=1;
            simpan = V%deno[i];
            V = V /deno[i];
            ans.push_back(V);
            gg.push_back(deno[i]);
            V= simpan;
        }
    }
    cout<<banyaknya<<endl;
    for (int i = 0; i < ans.size(); i++)
        cout << gg[i] <<" "<< ans[i]<<endl;
}

int main()
{
    unsigned long long int n;
    cin>>n;
    findMin(n);
    return 0;
}
