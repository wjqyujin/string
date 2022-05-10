//
//  string.h
//  string
//
//  Created by wang on 2022/4/16.
//

#ifndef string_h
#define string_h
#include<iostream>
using namespace std;
class String
{
    friend ostream &operator<<(ostream &,const String &);
    friend istream &operator>>(istream &,String &);
public:
    String();
    String(const char *);
    String(const String &);//拷贝构造函数
    ~String();
    const String &operator=(const String&);
    const String &operator+=(const String&);//拼接
    bool operator!()const;
    bool operator==(const String&)const;
private:
    char *p;
    int size;
};

#endif /* string_h */
