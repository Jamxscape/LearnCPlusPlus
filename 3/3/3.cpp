//
//  3.cpp
//  3
//
//  Created by 马元 on 2016/12/19.
//  Copyright © 2016年 MaYuan. All rights reserved.
//明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤100），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。

#include <iostream>
using namespace std;
int main3()
{
    int *p1,n;
    int b,c;
    cout<<"输出随机数的个数";
    cin>>n;
    p1=new int[n];
    
    for(int a=0;a<10;a++)
    {
        p1[a]=rand()%1000;
    }
    for(b=0;b<n;b++)
    {
        for(c=b+1;c<n;c++)
        {
          if(p1[b]==p1[c]);
            p1[b]=rand()%1000;
        }
    }
    int j,k,t,i;
    for(j=0;j<n-1;j++)
    {
        k=j;
        for(i=j+1;i<n;i++)
            if(p1[i]>p1[k])
                k=i;
        if(k!=j)
        {
            t=p1[j];
            p1[j]=p1[k];
            p1[k]=t;
        }
    }
    cout<<"输出的排序为";
			 for(i=0;i<=j;i++)
                 cout<<p1[i]<<" ";
			 cout<<endl;
    return 0;
}
    
