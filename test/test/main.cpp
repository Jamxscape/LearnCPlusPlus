//
//  main.cpp
//  test
//
//  Created by 马元 on 2017/6/17.
//  Copyright © 2017年 MaYuan. All rights reserved.
//
/*
#include <iostream>
using namespace std;
class User
{
public:
    virtual void login()=0;
};
class Guest:public User
{
public:
    void login()
    {
        cout<<"普通用户登录";
    }
    
};
class Admin:public User
{
public:
    void login()
    {
        cout<<"管理员用户登录";
    }
};
class Root:public User{
public:
    void login()
    {
        cout<<"超级管理员登录";
    }
};

int main()
{
    Admin a1;
    a1.login();
    Root a2;
    a2.login();
    return 0;
}
*/
#include <iostream>
using namespace std;
#include <math.h>
class Point
{
public:
    double x,y;
};
class Line:Point
{
public:
    double l;
    Point p1;
    Point p2;
    void getlength()
    {
        cin>>p1.x>>p1.y>>p2.x>>p2.y;
        l=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
        cout<<l;
    }
};
int main()
{
    Line L;
    L.getlength();
}











