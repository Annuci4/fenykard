#include "std_lib_facilities.h"
#include <iostream>
using namespace std;
int main()
{
    int a = 2018;
    int b = 42;

    cout<<"kezdo: "<<"a="<<a<<" b="<<b<<endl;
    a = b - a;
    b = b - a;
    a = b + a;
    cout<<"1. csere osszeadassal es kivonassal: "<<"a="<<a<<" b="<<b<<endl;
    a = b * a;
    b = a / b;
    a = a / b;
    cout<<"2. csere szorzassal es osztassal: "<<"a="<<a<<" b="<<b<<endl;
    return 0;
}

