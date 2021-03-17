//
//  22.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//排序fail。。。。。。
#include<iostream>
#include <cmath>
using namespace std;
int main22()
{int change(int a,int b);
    int a[4],j;
    for(int i=0;i<4;i++)
        cin>>a[i];
    for(j=0;j<4;j++)
    {    if(a[j]>a[j+1])change(a[j+1],a[j]);
    }
    for(j=0;j<4;j++)
        cout<<a[j]<<" ";
    cout<<endl;
    return 0;
}
int change(int a,int b)
{   int t;
    t=a;
    a=b;
    b=t;
    return 0;
}
