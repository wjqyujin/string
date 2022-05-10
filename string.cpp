//
//  string.cpp
//  string
//
//  Created by wang on 2022/4/16.
//

#include "string.h"
#include<iostream>
using namespace std;
String::String()
:size(0)
{
}
String::String(const char*s)
:size(0)
{
    size=sizeof(s);
    p=new char[size];
    for(int n=0;n<size;n++)
    {
        p[n]=*(s+n);
    }
}
String::String(const String &s)
:size(0)
{
    size=s.size;
    p=new char[size];
    for(int n=0;n<size;n++)
    {
        p[n]=s.p[n];
    }
}
String::~String()
{
    if(p)
        delete []p;
}
const String &String::operator=(const String&s)
{
    if(size!=0)
        delete []p;
    size=s.size;
    p=new char[size];
    for(int n=0;n<size;n++)
    {
        p[n]=s.p[n];
    }
    return *this;
}
const String &String::operator+=(const String&s)
{
    int t;
    t=size;
    size+=s.size;
    for(int n=t;n<size;n++)
    {
        p[n]=s.p[n-t];
    }
    return *this;
}
ostream &operator<<(ostream &out,const String &s)
{
    out<<"该字符串是:";
    for(int n=0;n<s.size;n++)
    {
        out<<s.p[n]<<" ";
    }
    return out;
}
istream &operator>>(istream &input,String &s)
{
    for(int n=0;n<s.size;n++)
    {
        input>>s.p[n];
    }
    return input;
}
bool String::operator!()const
{
    if(size==0)
        return false;//空
    return true;//非空
}
bool String::operator==(const String&s)const
{
    int t=1;
    if(size!=s.size)
    {
        return false;
    }
    for(int n=0;n<size;n++)
    {
        if(p[n]!=s.p[n])
        {
            t=0;
            break;
        }
    }
    if(t==0)
        return false;//不相等
    return true;//相等
}
