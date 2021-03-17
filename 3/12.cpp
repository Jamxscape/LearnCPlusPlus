//
//  12.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//写一函数，在一数组里查找某个值。

#include <iostream>
using namespace std;
int main12()
{
    int *p;
    int n,i,j;
    cout<<"输入数组的个数";
    cin>>n;
    p=new int(n);
    for(i=0;i<n;i++)
        cin>>p[i];
    cout<<"输入你想查找的数字是";
    int m;
    cin>>m;
    cout<<"下标为";
    for(j=0;j<n;j++)
        if(p[j]==m)
            cout<<j+1<<" ";
    cout<<endl;
    return 0;
}
