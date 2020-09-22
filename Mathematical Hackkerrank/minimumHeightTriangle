#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    // Complete this function
    int total = 2 * area;
    int x = total % base;

    if(x==0){
        total = total / base;
        return total;
    }else{
        int c = total / base;
       return c+1;
    }
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
