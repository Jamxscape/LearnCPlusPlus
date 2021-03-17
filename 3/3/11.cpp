
//
//  11.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//输入任意n个数，求解出最大值，最小值，并输出其下标

#include <iostream>
using namespace std;
int main11()
{
    int n,*p,i,max,min,a,b;
    cin>>n;
    p=new int(n);
    for(i=0;i<n;i++)
        cin>>p[i];
    max=p[0];
    min=p[0];
    for(i=1;i<n;i++)
    {
        if(p[i]>max)max=p[i],a=i;
       
 
    }a=a+1;
       for(i=1;i<n;i++)
    {
         if(p[i]<min)min=p[i],b=i;
    }b=b+1;
    cout<<max<<"("<<a<<")"<<","<<min<<"("<<b<<")"<<endl;
    return 0;
}
