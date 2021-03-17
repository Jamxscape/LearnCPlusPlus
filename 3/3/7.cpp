//
//  7.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//写一个程序，进行体操评分，依次输入n名评委所评分数，去除一个最高分和一个最低分，再算出平均分作为选手的得分。


#include<iostream>
#include <iomanip>
using namespace std;
int main7()
{
    int n,i;
    cout<<"输入评委的个数";
    cin>>n;
    double *p;
    p=new double(n);
    double goal=0,max,min;
    if(n<2)cout<<"亲，错了"<<endl;
    else if(n==2)
    {
        for(i=0;i<n;i++)
            cin>>p[i];
       goal=(p[0]+p[1])/2;
        cout<<setprecision(6)<<goal<<endl;
    }
    else if(n>2)
    {
        for(i=0;i<n;i++)
            cin>>p[i];
    max=p[0];
    min=p[0];
    for( i=1;i<n;i++)
    {   if(p[i]>max)max=p[i];
    if(p[i]<min)min=p[i];
    }
    for(i=0;i<n;i++)
        goal=goal+p[i];
    goal=(goal-max-min)/(n-2);
        cout<<setprecision(6)<<goal<<endl;
    }

    return 0;
}

