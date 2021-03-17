//
//  16.cpp
//  3
//
//  Created by 马元 on 2016/12/22.
//  Copyright © 2016年 MaYuan. All rights reserved.
// cout<<"求加}输入+，求减输入-，求乘输入*，求除输入/,求根号输入g,求平方输入^,求sin输入sin"<<endl;;注释，敲完第一个字符或数字后请敲回车，然后输入后续结果。
#include <sstream>
#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#define π 3.141592658
using namespace std;
bool yep(string str);
int main16()
{
    string k;
    char a;
    double d,s;
    double v;
    cin>>k;
    if(yep(k))
    {
        const char *p=k.data();
        v=atof(p);
        cin>>a>>d;
    switch(a)
        {
            case '+':cout<<v+d<<endl;break;
            case '-':cout<<v-d<<endl;break;
            case '*':cout<<setprecision(6)<<v*d<<endl;break;
            case '/':cout<<setprecision(6)<<v/d<<endl;break;
            case '^':cout<<setprecision(6)<<pow(v,d)<<endl;break;
        }
    }
 
   else
   {     int h=0;
        if(k=="gen")h=0;
        else if(k=="sin")h=1;
        else if(k=="cos")h=2;
        else if(k=="tan")h=3;
        else if(k=="sec")h=4;
        else if(k=="csc")h=5;
        else if(k=="cot")h=6;
        cin>>s;
        switch(h)
    {
        case 0:cout<<setprecision(6)<<sqrt(s)<<endl;break;
        case 1:cout<<setprecision(6)<<sin(s)<<endl;break;
        case 2:cout<<setprecision(6)<<cos(s)<<endl;break;
        case 3:cout<<setprecision(6)<<tan(s)<<endl;break;
        case 4:cout<<setprecision(6)<<1/(cos(s))<<endl;break;
        case 5:cout<<setprecision(6)<<1/(sin(s))<<endl;break;
        case 6:cout<<setprecision(6)<<1/(tan(s))<<endl;break;
        default:break;
    }
    }
       return 0;
}
bool yep(string str)
{
    stringstream s(str);
    double d;
    char c;
    if(!(s>>d))
        return false;
    if (s>>c)
        return false;
    return true;
}






/*{  cin>>k;
 double j;
 if(k=="gen")
 {
 
 cin>>j;
 cout<<setprecision(6)<<sqrt(j)<<endl;
 }
 
 if(k=="sin")
 {
 
 cin>>j;
 cout<<setprecision(6)<<sin(j)<<endl;
 }
 else if(k=="cos")
 {
 
 cin>>j;
 cout<<setprecision(6)<<cos(j)<<endl;
 }
 else if(k=="tan")
 {
 
 cin>>j;
 cout<<setprecision(6)<<tan(j)<<endl;
 }
 else if(k=="sec")
 {
 
 cin>>j;
 cout<<setprecision(6)<<1/(cos(j))<<endl;
 }
 else if(k=="csc")
 {
 
 cin>>j;
 cout<<setprecision(6)<<1/(sin(j))<<endl;
 }
 else if(k=="cot")
 {
 
 cin>>j;
 cout<<setprecision(6)<<1/(tan(j))<<endl;
 }
 }*/
