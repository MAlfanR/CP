#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

// Complete the solve function below.
unsigned long long int  solve(ulli n, ulli m) {

    unsigned long long int q;
    q = n *m;
    q= q-1;
    return q;
}

int main()
{
    ulli n, m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;

    return 0;
}
