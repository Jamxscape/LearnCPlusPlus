//
//  49.cpp
//  3
//
//  Created by 马元 on 2017/1/7.
//  Copyright © 2017年 MaYuan. All rights reserved.
//*猜数字游戏是gameboy最喜欢的游戏之一。游戏的规则是这样的：计算机随机产生一个四位数，然后玩家猜这个四位数是什么。每猜一个数，计算机都会告诉玩家猜对几个数字，其中有几个数字在正确的位置上。比如计算机随机产生的数字为1122。如果玩家猜1234,因为1,2这两个数字同时存在于这两个数中，而且1在这两个数中的位置是相同的，所以计算机会告诉玩家猜对了2个数字，其中一个在正确的位置。如果玩家猜1111,那么计算机会告诉他猜对2个数字，有2个在正确的位置。现在给你一段gameboy与计算机的对话过程，你的任务是根据这段对话确定这个四位数是什么。*/


#include <iostream>
#include <cmath>
using namespace std;
int main49()
{
    int a,b,c,d,e,b1,c1,d1,e1,n,i=0;
    srand(time(0));
    a=1000+rand()%9999;
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    cout<<a<<endl;
    do
    {
        n=0;
        cin>>e1>>d1>>c1>>b1;
    if(e1==e)
    {
       n++;
        cout<<"千位正确"<<endl;
    }
    if(d1==d)
    {
        n++;
        cout<<"百位正确"<<endl;
    }
    if(c1==c)
    {
        n++;
        cout<<"十位正确"<<endl;
    }
    if(b1==b)
    {
        n++;
        cout<<"个位正确"<<endl;
    }
        i++;
        if(n==4)cout<<"你只猜了"<<i<<"次，就猜对了。"<<endl;
        else {cout<<"你已经猜了"<<i<<"次了。"<<endl;
            cout<<"并且，你猜对了"<<n<<"位数。"<<endl;}
    } while(n!=4);
    cout<<"恭喜猜对了！"<<endl;
    
    
    
    
    
    
    
    return 0;
}

