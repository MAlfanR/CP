#include<bits/stdc++.h>
using namespace std;

int main(){
int x1,y1,x2,y2;

cin>>x1>>y1>>x2>>y2;

x2 = abs(x2-x1);
y2 = abs(y2-y1);

cout<<x2+y2<<endl;
}
