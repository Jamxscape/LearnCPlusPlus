//
//  20.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//筛选法求一段数字之内的素数
//素数的最简便方法，亲亲亲  2018.10. 9

#include <iostream>
using namespace std;
int main20()
{
    int a[200000];
    int n,i,j,b;
    cout<<"输入数字的范围并用空格隔开，即可求出该区间内的素数"<<endl;
    cin>>b>>n;
        for(i=2;i<=n;i++)
        for(j=i+i;j<=n;j=j+i)
            a[j]=1;
    for(i=b;i<=n;i++)
        if(a[i]==0)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
