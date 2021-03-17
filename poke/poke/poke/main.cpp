//
//  main.cpp
//  poke
//
//  Created by 马元 on 2017/3/28.
//  Copyright © 2017年 MaYuan. All rights reserved.
//

#include <iostream>
#include <string>
#include "poke.h"
#include "player.h"
int b[10];
using namespace std;
int poker::printf_num(int number)
{
    number=1+rand()%15;
    cout<<"number:";
    if(number==11)
        cout<<"J"<<endl;
    else if(number==12)
        cout<<"K"<<endl;
    else if(number==13)
        cout<<"Q"<<endl;
    else if(number==14)
        cout<<"BK"<<endl;
    else if(number==15)
        cout<<"RK"<<endl;
    else cout<<number<<endl;
    return number;
}

void poker::printf_style()
{
    style=1+rand()%4;
    if(style==1)
        cout<<"color:meihua"<<endl;
    else if(style==2)
        cout<<"color:blackpear"<<endl;
    else if(style==3)
        cout<<"color:redpear"<<endl;
    else if(style==4)
        cout<<"color:quare"<<endl;
}
int player::printf_Ben()
{
    int t=0;
    poker B;
            cout<<"Ben:"<<endl;
            cout<<"  ";
            B.printf_num(t);
            cout<<"  ";
            B.printf_style();
    Ben=t;
    return Ben;
}
int player::printf_Jam()
{
    int t=0;
    poker J;
            cout<<"Jam:"<<endl;
            cout<<"  ";
            J.printf_num(t);
            cout<<"  ";
            J.printf_style();
    Jam=t;
    return Jam;
}
int player::printf_John()
{
    int t;
    poker Jo;
             cout<<"John:"<<endl;
            cout<<"  ";
            Jo.printf_num(t);
    cout<<"  ";
            Jo.printf_style();
    John=t;
    return John;
}
int player::printf_you()
{
    int t;
    poker y;
           cout<<"you:"<<endl;
            cout<<"  ";
            y.printf_num(t);
    cout<<"  ";
            y.printf_style();
    you=t;
    return you;
}
void player::compare()
{
    cout<<"The result is:"<<endl;
    cout<<"  ";
    if(Ben>Jam&&Ben>you&&Ben>John)
        cout<<"Ben win!"<<endl;
    else if(Jam>you&&Jam>John)
        cout<<"Jam win!"<<endl;
    else if(John>you)cout<<"John win!"<<endl;
    else    cout<<"You win!"<<endl;
}
int playerpeo()
{
    int j=0;
    string peo[10];
    for(int i=0;i<10;i++)
    {
        b[i]=100;
    }
    //string s;
    cout<<"先敲一个空格，然后输入牌数"<<endl;
    while(getchar()!='\n')//如何判断其为输入的回车
    {
        cin>>peo[j];
        //s=peo[i];
        j++;
    }
    if(peo[0]=="Pass")
        b[0]=54;
    return b[10];
}
int main()
{
    
    playerpeo();
    cout<<b[0]<<endl;
                return 0;
}
