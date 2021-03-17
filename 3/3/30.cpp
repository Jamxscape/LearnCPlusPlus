
//
//  30.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//给你n个整数，求他们中所有奇数的乘积。Input输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。Output输出每组数中的所有奇数的乘积，对于测试实例，输出一行。

#include<iostream>
using namespace std;
int main30()
{
    int n,*p,sum=1,t=1;
    while(cin>>n)
    {
        
        p=new int[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int j=0;j<n;j++)
            if(p[j]%2!=0)sum=sum*p[j];
        cout<<sum<<endl;
        sum=t;
    }
    
    return 0;
}
