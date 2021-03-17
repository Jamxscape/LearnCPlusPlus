//
//  23.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//直接条用algorithm
#include<algorithm>
#include<iostream>
using namespace std;
int comp(int a,int b)
{
    return a>b;//在两元素相同时一定要返回0或者false
}
int main23()

{
    int a[4],i;
    for(i=0;i<4;i++)
        cin>>a[i];
    sort(a,a+4);
    for(i=0;i<4;i++)
        cout<<a[i]<<' ';
    cout<<endl;//由小到大。
    sort(a,a+4,comp);
    for(i=0;i<4;i++)
        cout<<a[i]<<' ';
    cout<<endl;//由大到小。
    return 0;
}
