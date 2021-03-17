//
//  24.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//  自动贩卖机投入1美元，0.25美分，0.1美分，0.05美分；直到3.5美分结束
#include <iostream>
#include <string>
using namespace std;
int main24()
{   double c(string k);
    double sum=0,w;
    string k;
    cout<<"请投入下一枚硬币";
    do
    {  cin>>k;
        sum=sum+c(k);
        w=sum-3.5;
        if(sum>=3.5)cout<<"请享用您的炸鸡块便当，并找您"<<w<<"美元";
        else cout<<"已经投入"<<sum<<"美元，"<<"请投入下一枚硬币";
    }while(sum<=3.5);
    return 0;
}
double c(string k)
{
    double a;
        if(k=="dol")a=1.0;
        else if(k=="q")a=0.25;
        else if(k=="d")a=0.1;
        else if(k=="n")a=0.05;
        else cout<<"投错了"<<endl;
    return a;
}
