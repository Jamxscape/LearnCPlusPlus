//
//  45.cpp
//  3
//
//  Created by 马元 on 2017/1/2.
//  Copyright © 2017年 MaYuan. All rights reserved.
//有二个整数，它们加起来等于某个整数，乘起来又等于另一个整数，它们到底是真还是假，也就是这种整数到底存不存在，实在有点吃不准，你能快速回答吗？看来只能通过编程。

#include <iostream>
using namespace std;
int main45()
{
    int n,m,x,y,k=0;
    cin>>n>>m;
    for(x=0;x<=9;x++)
        for(y=0;y<=9;y++)
            if(x+y==n&&x*y==m)
                cout<<x<<' '<<y<<endl;
            else k=1;
    if(k==1)cout<<"no"<<endl;
    return 0;
}
