#include "ultah.h"
#include<iostream>

using namespace std;

Birthday::Birthday(int m, int d, int y) : month(m), day(d), year(y)
{
    //ctor
    cout<<month<<endl;
    cout<<day<<endl;
    cout<<year<<endl;
}

int main(){
Birthday(10,11,12);
}
