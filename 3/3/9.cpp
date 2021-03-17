
//
//  9.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//输入年月日，判断这是这一年的第几天。

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sa=0,i;
    cout<<"输入年月日"<<endl;
    cin>>a;
    cout<<"年";
    cin>>b;
    cout<<"月";
    cin>>c;
    cout<<"日";
    if((a%4==0 && a%100!=0)||(a%400==0))
    {
        for(i=1;i<b;i++)
        { if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)sa=sa+31;
            else if(i==2)sa=sa+29;
            else sa=sa+30;
        }
    }
    else
    {
        for(i=1;i<b;i++)
        { if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)sa=sa+31;
            else if(i==2)sa=sa+28;
            else sa=sa+30;

        }
    }
    sa=sa+c;
    cout<<"这是"<<a<<"年的第"<<sa<<"天。"<<endl;
        return 0;
}
