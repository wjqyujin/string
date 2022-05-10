//
//  main.cpp
//  string
//
//  Created by wang on 2022/4/16.
//

#include <iostream>
#include "string.h"
using namespace std;
int main()
{
    char a[4]={'H','o','m','e'};
    char b[6]={'l','a','n','d','e','r'};
    String A(a);
    String B(b);
    String C;
    String A1(A);
    String B1(B);
    String A2;
    String B2;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<A1<<endl;
    cout<<B1<<endl;
    A2=A;
    B2=B;
    A2+=B2;
    cout<<A2<<endl;
    return 0;
}
