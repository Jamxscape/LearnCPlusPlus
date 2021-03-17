//
//  38.cpp
//  3
//
//  Created by 马元 on 2016/12/26.
//  Copyright © 2016年 MaYuan. All rights reserved.
//
#include <iostream> 
using namespace std;
int g;
void f(int a,int b=7,char c='*')
{
    cout<<a+b<<c<<endl;
}
int main38()
{
    /*f(0,0,'*');
    f(6,'#');
    f(5,8);
    f(5);
    return 0;*/
   
    /*int m=100,*p;
    *p=&a;
    f(*p);*/
    int a[10]={0,1,2,3,4,5,6,7,8,9},*p=a;
    cout<<*a<<endl;
    cout<<*p<<endl;
    cout<<a<<endl;
    cout<<p[0]<<endl;
    return 0;
}
