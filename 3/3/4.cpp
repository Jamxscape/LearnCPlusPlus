//
//  4.cpp
//  3
//
//  Created by 马元 on 2016/12/19.
//  Copyright © 2016年 MaYuan. All rights reserved.
//superwyh的学校要举行拔河比赛，为了在赛前锻炼大家，老师决定把班里所有人分为两拨，进行拔河因为为锻炼所以为了避免其中一方的实力过强老师决定以体重来划分队伍，尽量保持两个队伍的体重差最少，因为老师对结果没兴趣，所以只告诉老师最小的体重差是多少就行了。这个受苦受累的任务就交给superwyh了，因为这两天superwyh的后背间谍sjh闹肚子了，所以只好superwyh亲自去调查每个人的体重，但是仅仅知道体重依然难以确定到底如何分配队伍，请各位oier帮助superwyh出出主意。

#include <iostream>
using namespace std;
int main4()
{
    int a,b,max,min,cha,n;
    cout<<"输入班级的人数为";
    cin>>n;
    cin>>b;
    max=b;
    min=b;
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        if(a>max)max=a;
        if(a<min)min=a;
    }
    cha=max-min;
    cout<<"最大体重与最小体重之差为"<<cha<<endl;
    return 0;
}
