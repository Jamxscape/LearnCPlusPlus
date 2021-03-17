//
//  29.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//假设一堆由1分、2分、5分组成的n个硬币总面值为m分，求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）。输入数据第一行有一个正整数T，表示有T组测试数据；接下来的T行，每行有两个数n,m，n和m的含义同上。Output对于每组测试数据，请输出可能的组合方式数；每组输出占一行。

#include<iostream>
#include <ctime>
using namespace std;
int main29()
{
    int n,m,t,k,l,o,q=0,*p;//k为1，l为2，o为5
    cin>>t;
    p=new int[t];
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        for(k=0;k<=n;k++)
        {    for(l=0;l<=n;l++)
                for(o=0;o<n;o++)
                    if(n==k+l+o && m==k+2*l+5*o)q++;
        }
        p[i]=q;
        q=0;
    }
    for(int g=0;g<t;g++)
    cout<<p[g]<<endl;
    return 0;
}
