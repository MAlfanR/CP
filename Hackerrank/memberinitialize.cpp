#include "memberinitialize.h"
#include<iostream>
using namespace std;
memberinitialize::memberinitialize(int a, int b): regVar(a), constVar(b)
{
    //ctor
    cout<<regVar<<endl;
    cout<<constVar<<endl;
}

int main(){
memberinitialize objek(42,35);
}
