//
//  19.cpp
//  3
//
//  Created by 马元 on 2016/12/23.
//  Copyright © 2016年 MaYuan. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double fei(double s,double d);
int main19()
{
    cout<<"求解x^2的定积分，先输入上限，后输入下限，回车结束。"<<endl;
    double a,b;
    cin>>a>>b;
    fei(a,b);
    return 0;
}
double fei(double s,double d)
{
    double c;
    c=s*s*s/3-d*d*d/3;
    cout<<setprecision(6)<<c<<endl;
    return 0;
}
