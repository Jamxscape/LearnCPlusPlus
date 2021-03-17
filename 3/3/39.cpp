//
//  39.cpp
//  3
//
//  Created by 马元 on 2016/12/27.
//  Copyright © 2016年 MaYuan. All rights reserved.
//输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。Input输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。Output对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行

#include <iostream>
#include <cmath>
using namespace std;
int main39()
{
    int *p,n,i,j,k,t,*p1,*p2,f=0,g;
    cin>>n;
    p=new int[n];
    p1=new int[n];
    p2=new int[n];
    for(i=0;i<n;i++)
        cin>>p1[i];
    for(i=0;i<n;i++)
        if(p1[i]<0)p[i]=-p1[i];
        else p[i]=p1[i];
    for(j=0;j<n-1;j++)
    {
        k=j;
        for(i=j+1;i<n;i++)
            if(p[i]>p[k])k=i;
        if(k!=j)
        {
            t=p[k];
            p[k]=p[j];
            p[j]=t;
        }
    }
    for(i=0;i<n;i++)
        cout<<p[i]<<" ";
    cout<<endl;
    for(j=0;j<n;j++)
    {   for(i=0;i<n;i++)
    {
        
    if(-p1[i]==p[j])p2[f]=-p[j];
            else if(p1[i]==p[j]) p2[f]=p[j];
        
        }
        f++;
    }
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(p1[i]==-p1[j])
        {
            for(g=0;g<n;g++)
                if(p1[i]==p2[g])p2[g]=-p2[g],j++,i++;
        }
    for(i=0;i<n;i++)
        cout<<p2[i]<<" ";
    cout<<endl;
    cout<<endl;
    return 0;
}
