//
//  46.cpp
//  3
//
//  Created by 马元 on 2017/1/2.
//  Copyright © 2017年 MaYuan. All rights reserved.
//Given a positive integer N, you should output the leftmost digit of N^N.


/*Input
The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case contains a single positive integer N(1<=N<=1,000,000,000).*/


#include <iostream>
#include <cmath>
using namespace std;
int main46()
{
    int a,b,c=0,t;
    cin>>a;
    b=pow(a,a);
    t=b;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
    }
    cout<<t<<' '<<c<<endl;
    return 0;
}
