//
//  6.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//掷骰子10次，统计得到各点数的次数。

#include<iostream>
using namespace std;
int main6()
{
    int a[10],b=0,c=0,d=0,e=0,f=0,g=0;
    srand(time(0));
    for(int i=0;i<10;i++)
    {

     a[i]=1+rand()%6;
    if(a[i]==1)b++;
    if(a[i]==2)c++;
    if(a[i]==3)d++;
    if(a[i]==4)e++;
    if(a[i]==5)f++;
    if(a[i]==6)g++;
    }
    cout<<"b="<<b<<",c="<<c<<",d="<<d<<",e="<<e<<",f="<<f<<",g="<<g<<endl;
    for(int j=0;j<10;j++)
        cout<<a[j]<<" ";
    cout<<endl;
    return 0;
}
