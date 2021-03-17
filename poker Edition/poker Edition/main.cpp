//
//  main.cpp
//  poker Edition
//
//  Created by 马元 on 2017/4/11.
//  Copyright © 2017年 MaYuan. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <string>
using namespace std;
class Competition
{
private:
    /*int ptrans[18];*/
    int have;
    
    
public:
    int style;
    Competition();
    /*void tansformstyle();*/
    void compare(int a[18],int b[18]);//比较牌数
    void paixu(int p1[18]);
    void cuthave();
    void judge(int a[18]);
};
Competition::Competition()
{
    style=0;
    have=18;
}
void Competition::paixu(int p1[18])//给牌数排序
{
    int j,k,t,i;
    for(j=0;j<17;j++)
    {
        k=j;
        for(i=j+1;i<18;i++)
            if(p1[i]<p1[k])
                k=i;
        if(k!=j)
        {
            t=p1[j];
            p1[j]=p1[k];
            p1[k]=t;
        }
    }
    
}
void Competition::judge(int a[18])//判断牌型
{
    paixu(a);
    int t1=0;
    int p=0,p1=0;
    for(int i=0;i<18;i++)
    {   if(a[i]!=100)//判断不是初始值
    {
        t1++;
    }
    }//
    cout<<t1<<endl;
    if(t1==4)
    {
        for(int i=0;i<4;i++)//只需要判断三遍
        {
            if((a[i]/4)==(a[i+1]/4))
            {
                p++;
                //cout<<a[i]/4<<p<<"p"<<endl;
            }
        }
        cout<<p<<"p"<<endl;
        if(p==2)//c
            style=1;//三带一
        else if(p==3)
            style=2;//炸弹
    }
    else if(t1==5)//5张π组合,此处不能并列，不能并列，不能并列呀 啊啊啊啊啊啊啊啊，握草
    {
        
        if((a[2]/4!=a[3]/4&&a[2]/4==a[1]/4&&a[0]/4==a[1]/4&&a[3]/4==a[4]/4)||(a[1]/4!=a[2]/4&&a[2]/4==a[3]/4&&a[3]/4==a[4]/4&&a[0]/4==a[1]/4))
            style=3;//三带二；
        else if(a[0]/4+1==a[1]/4&&a[1]/4+1==a[2]/4&&a[2]/4+1==a[3]/4&&a[3]/4+1==a[4]/4)
            style=4;//5顺
        /*for(int i=0;i<4;i++)
         {
         if(a[i]/4==a[i+1]/4)
         {
         p++;
         //cout<<a[i]/4<<p<<"p"<<"1"<<endl;
         }
         }
         
         for(int i=0;i<4;i++)
         {
         if((a[i]/4)<(a[i+1]/4))
         {
         p++;
         cout<<a[i]/4<<p<<"p"<<endl;
         }
         }*/
        //if(p==4)
        //style=4;5顺子 4
    }
    else if(t1==6)//6张hhhhhhh或或//nan难啊,此处不能够并列
    {
        if((a[1]/4==a[0]/4&&a[2]/4==a[3]/4&&a[1]/4==a[2]/4&&a[4]/4!=a[3]/4)||(a[2]/4!=a[1]/4&&a[2]/4==a[3]/4&&a[4]/4==a[5]/4&&a[3]/4==a[4]/4))
            style=5;//四带二 昂
        else if(a[3]/4==a[2]/4&&a[0]/4==a[1]/4&&a[4]/4==a[5]/4&&(a[1]/4)+1==a[2]/4&&(a[3]/4)+1==a[4]/4)
            style=6;//三对对牌
        else if(a[0]/4+1==a[1]/4&&a[1]/4+1==a[2]/4&&a[2]/4+1==a[3]/4&&a[3]/4+1==a[4]/4&&a[4]/4+1==a[5]/4)
            style=7;//6张单顺
        /*for(int i=0;i<5;i++)
         {
         if((a[i]/4)==(a[i+1]/4))
         {
         p++;
         cout<<a[i]/4<<p<<"1"<<"p"<<endl;
         }
         int p1=0;
         if((a[i]/4)+1==(a[i+1]/4))
         {
         p1++;
         cout<<a[i]/4<<p<<"1"<<"p"<<endl;
         }
         if(p==3&&p1==2)
         { style=5;//二顺 5
         }
         
         }
         for(int i=0;i<5;i++)
         {
         if((a[i]/4)<(a[i+1]/4))
         {
         p++;
         cout<<a[i]/4<<p<<"2"<<"p"<<endl;
         
         }int p2=0;
         if((a[i]/4)+1==(a[i+1]/4))
         {
         p2++;
         }
         if(p==5)
         style=7;//6张单顺 7
         }
         for(int i=0;i<3;i++)
         {
         if(a[i]/4==a[i+1]/4)
         {p++;
         cout<<a[i]/4<<p<<"3"<<"p"<<endl;
         }
         if(p==4)
         style=6;//四带二 6 不能带2张单张
         }这种方法过于愚蠢    */
    }
    else if(t1==7)//7张张召忠做做做做做做做做,this is easy
    {
        for(int i=0;i<7;i++){
            if((a[i]/4)<(a[i+1]/4))
            {
                p++;
            }
        }
        if(p==7)
            style=13;//7顺
    }
    else if(t1==8)//8张啊啊啊啊啊啊
    { /*for(int i=0;i<4;i++)
       {
       if((a[i]/4)==(a[i+1]/4))
       {
       p++;
       }
       }
       if(p==4)
       {
       for(int i=0;i<4;i++)
       {
       if((a[i]/4)==(a[i+1]/4)&&(a[i+1]/4)==(a[i+2]/4))
       {
       p1++;
       cout<<"p1="<<p1<<endl;
       }
       }
       if(p1==2)
       style=8;//飞机带翅膀
       for(int i=0;i<4;i++)
       {
       if((a[i]/4)==(a[i+1]/4)&&(a[i+2]/4)==(a[i+3]/4))
       {
       p1++;
       }
       if(p1==3)
       style=9;//四双顺
       }
       }*/
        if(a[0]/4==a[1]/4&&a[2]/4==a[3]/4&&a[4]/4==a[5]/4&&a[6]/4==a[7]/4&&(a[1]/4)+1==a[2]/4&&(a[3]/4)+1==a[4]/4&&(a[5]/4)+1==a[6]/4)
            style=9;//四双顺
        else if((a[1]/4==a[0]/4&&a[2]/4==a[1]/4&&a[3]/4==a[4]/4&&a[4]/4==a[5]/4&&(a[2]/4)+1==a[3]/4&&a[6]/4!=a[5]/4)||(a[2]/4==a[3]/4&&a[3]/4==a[4]/4&&a[5]/4==a[6]/4&&a[7]/4==a[6]/4&&(a[4]/4)+1==a[5]/4&&a[1]/4!=a[2]/4))//have some wrong ,doesn't contain spec EG. ,飞机带翅膀
            style=10;
        for(int i=0;i<8;i++)
        {
            if((a[i]/4)<(a[i+1]/4))
            {
                p++;
            }
        }
        if(p==8)
            style=8;//8顺
        
        
    }
    else if(t1==9)
    {
        for(int i=0;i<9;i++)
        {
            if((a[i]/4)==(a[i+1]/4)&&(a[i+1]/4)==(a[i+2]/4))
            {
                p1++;
                //cout<<p1<<endl;
            }
        }
        if(p1==3)
            style=11;//三对顺
        
        for(int i=0;i<9;i++)
        {
            if((a[i]/4)<(a[i+1]/4))
            {
                p++;
                cout<<p<<endl;
            }
        }
        
        if(p==9)
            style=12;//9顺
        
        
    }
    //cout<<style<<endl;
}
void Competition::compare(int a[18],int b[18])//玩家出牌与上一家大小的比较,a为玩家
{
    paixu(a);
    paixu(b);
    judge(a);
    int t=style;//为玩家的牌型为何
    judge(b);
    int t1=0;
    for(int i=0;i<18;i++)
        if(b[i]!=0)
        {
            t1++;
        }//计数a[i]其有几张牌
    if(t!=style)
        cout<<"出牌错误";
    else {
        if(t1==1)//一张牌比较大小
        {
            if(a[0]>b[0])
                have--;
        }
        else if(t1==2)//两张比较
        {for(int j=0;j<2;j++)
        {
            if(a[j]>b[j])
                have=have-2;
        }
        }
        else if(t1==3)//三张比较
        {
            if(a[2]>b[2])
                have=have-3;
        }
        else if(t1==4)//四张比较
        {
            if(style==1)//三带一比较
            {
                if(a[2]>b[2])
                    have=have-4;
            }
            else if(style==2)//炸弹比较
            {
                if(a[0]>b[0])
                    have=have-4;
            }
        }
        else if(t1==5)
        {
            if(style==4)//5顺
            {
                if(a[4]>b[4])
                {
                    have-=5;
                }
            }
            else if(style==3)//三代二
            {
                if(a[3]>b[3])
                    have-=5;
            }
        }
        else if(t1==6)
        {
            if(style==5)
            {
                if(a[3]>b[3])
                    have-=6;
            }
            else if(style==6)
            {
                if(a[5]>b[5])
                    have-=6;
            }
            else if(style==7)
            {
                if(a[5]>b[5])
                    have-=6;
            }
        }
        else if(t1==7)//若让我做一个软件公司的经理，我一定出最刁钻的问题。比如说。
        {
            if(style==13)
            {
                if(a[6]>b[6])
                    have-=7;
            }
        }
        else if(t1==8)
        {
            if(style==9)
            {
                if(a[7]>b[8])
                    have-=8;
            }
            else if(style==10)
            {
                if(a[5]>b[5])
                {
                    have-=8;
                }
            }
            else if(style==8)
            {
                if(a[7]>b[7])
                {
                    have-=8;
                }
            }
        }
        else if(t1==9)
        {
            if(style==12)
            {
                if(a[8]>b[8])
                {
                    have-=9;
                }
            }
        }
        if(t==2&&style!=2)//炸弹于上
        {
            have-=2;
        }
        else if(a[0]==53&&a[1]==54)
        {
            have-=2;
        }
    }
}
int pokerid[11];
class Poker
{
private:
    int num[54];
public:
    void set_ns();
    Poker();
    int transform(int a[],int size);
    void distinguish(int i);
    void paixu(int p1[18]);
};
Poker::Poker(){
    for(int i=0;i<54;i++)
        num[i]=i+1;
}
void Poker::set_ns()
{
    int j,t;
    srand((unsigned)time(0));
    for(int i=0;i<54;i++)
    {
        j=rand()%54;
        t=num[i];
        num[i]=num[j];
        num[j]=t;
    }//随机产生一个下标，然后替代i的值
}
int Poker::transform(int a[],int size)
{
    for(int i=0;i<size;i++)
        a[i]=num[i];
    
    return 0;
}
void Poker::distinguish(int num)//将所有数字转换成牌数和花色，功能为下一步用于排序
{
    //enum style{Blackpear,Redpear,Square,Plum};
    if(num>=1&&num<=4)
    {
        cout<<"A";
        if(num==1)cout<<"Blackpear";
        else if(num==2)cout<<"Redpear";
        else if(num==3)cout<<"Square";
        else if(num==4)cout<<"Plum";
    }
    else if(num>=5&&num<=8)
    {
        cout<<"2";
        if(num==5)cout<<"Blackpear";
        else if(num==6)cout<<"Redpear";
        else if(num==7)cout<<"Square";
        else if(num==8)cout<<"Plum";
    }
    else if(num>=9&&num<=12)
    {
        cout<<"3";
        if(num==9)cout<<"Blackpear";
        else if(num==10)cout<<"Redpear";
        else if(num==11)cout<<"Square";
        else if(num==12)cout<<"Plum";
    }
    else if(num>=13&&num<=16)
    {
        cout<<"4";
        if(num==13)cout<<"Blackpear";
        else if(num==14)cout<<"Redpear";
        else if(num==15)cout<<"Square";
        else if(num==16)cout<<"Plum";
    }
    else if(num>=17&&num<=20)
    {
        cout<<"5";
        if(num==17)cout<<"Blackpear";
        else if(num==18)cout<<"Redpear";
        else if(num==19)cout<<"Square";
        else if(num==20)cout<<"Plum";
    }
    else if(num>=21&&num<=24)
    {
        cout<<"6";
        if(num==21)cout<<"Blackpear";
        else if(num==22)cout<<"Redpear";
        else if(num==23)cout<<"Square";
        else if(num==24)cout<<"Plum";
    }
    else if(num>=25&&num<=28)
    {
        cout<<"7";
        if(num==25)cout<<"Blackpear";
        else if(num==26)cout<<"Redpear";
        else if(num==27)cout<<"Square";
        else if(num==28)cout<<"Plum";
    }
    else if(num>=29&&num<=32)
    {
        cout<<"8";
        if(num==29)cout<<"Blackpear";
        else if(num==30)cout<<"Redpear";
        else if(num==31)cout<<"Square";
        else if(num==32)cout<<"Plum";
    }
    else if(num>=33&&num<=36)
    {
        cout<<"9";
        if(num==33)cout<<"Blackpear";
        else if(num==34)cout<<"Redpear";
        else if(num==35)cout<<"Square";
        else if(num==36)cout<<"Plum";
    }
    else if(num>=37&&num<=40)
    {
        cout<<"10";
        if(num==37)cout<<"Blackpear";
        else if(num==38)cout<<"Redpear";
        else if(num==39)cout<<"Square";
        else if(num==40)cout<<"Plum";
    }
    else if(num>=41&&num<=44)
    {
        cout<<"J";
        if(num==41)cout<<"Blackpear";
        else if(num==42)cout<<"Redpear";
        else if(num==43)cout<<"Square";
        else if(num==44)cout<<"Plum";
    }
    else if(num>=45&&num<=48)
    {
        cout<<"Q";
        if(num==45)cout<<"Blackpear";
        else if(num==46)cout<<"Redpear";
        else if(num==47)cout<<"Square";
        else if(num==48)cout<<"Plum";
    }
    else if(num>=49&&num<=52)
    {
        cout<<"K";
        if(num==49)cout<<"Blackpear";
        else if(num==50)cout<<"Redpear";
        else if(num==51)cout<<"Square";
        else if(num==52)cout<<"Plum";
    }
    else if(num==53)cout<<"BlackKing";
    else if(num==54)cout<<"RedKing";
    
}
void Poker::paixu(int p1[18])//给牌数排序
{
    int j,k,t,i;
    for(j=0;j<17;j++)
    {
        k=j;
        for(i=j+1;i<18;i++)
            if(p1[i]<p1[k])
                k=i;
        if(k!=j)
        {
            t=p1[j];
            p1[j]=p1[k];
            p1[k]=t;
        }
    }
    
}
/*void Poker::pokerstyle(int b[18])//牌的组合类型
 {
 int i=0;
 if((b[i]==53&&b[i+1]==54)||(b[i+1]==53&&b[i]==54))//火箭
 {
 pokerid[0]=11;
 }
 else if(b[i]==b[i+1]==b[i+2]==b[i+4])//炸弹
 {
 cout<<"bomb"<<endl;
 pokerid[1]=10;
 }
 else if(b[i]!=0)pokerid[2]=3;//单张
 else if(b[i]==b[i+1]==b[i+2])pokerid[3]=4;//对牌
 else if((b[i]==b[i+1]==b[i+2]&&b[i+3]!=0)||(b[i+1]==b[i+3]==b[i+2]&&b[i]!=0))//三带一
 {
 cout<<"Three and one poker";
 pokerid[4]=5;
 }
 else if((b[i]==b[i+1]==b[i+2]&&b[i+3]==b[i+4])||(b[i+4]==b[i+3]==b[i+2]&&b[i]==b[i+1]))//三带二
 {
 cout<<"Three and one poker";
 pokerid[4]=5;
 }
 
 else if((b[i]==b[i+1]&&b[i+2]==b[i+3]&&b[i+4]==b[i+5]&&b[i+6]==b[i+7]&&b[i+8]==b[i+9]&&b[i+10]==b[i+11]&&b[i+12]==b[i+13]&&b[i+14]==b[i+15]&&b[i+16]==b[i+17])||(b[i]==b[i+1]&&b[i+2]==b[i+3]&&b[i+4]==b[i+5]&&b[i+6]==b[i+7]&&b[i+8]==b[i+9]&&b[i+10]==b[i+11]&&b[i+12]==b[i+13]&&b[i+14]==b[i+15])||(b[i]==b[i+1]&&b[i+2]==b[i+3]&&b[i+4]==b[i+5]&&b[i+6]==b[i+7]&&b[i+8]==b[i+9]&&b[i+10]==b[i+11]&&b[i+12]==b[i+13])||(b[i]==b[i+1]&&b[i+2]==b[i+3]&&b[i+4]==b[i+5]&&b[i+6]==b[i+7]&&b[i+8]==b[i+9]&&b[i+10]==b[i+11])||(b[i]==b[i+1]&&b[i+2]==b[i+3]&&b[i+4]==b[i+5]&&b[i+6]==b[i+7]&&b[i+8]==b[i+9])||(b[i]==b[i+1]&&b[i+2]==b[i+3]&&b[i+4]==b[i+5]))//连对，有问题，不能确定是否是连着
 {
 cout<<"Double poker!";
 pokerid[5]=6;
 }
 else if(b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]<b[i+6]<b[i+7]<b[i+8]<b[i+9]<b[i+10]<b[i+11]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]<b[i+6]<b[i+7]<b[i+8]<b[i+9]<b[i+10]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]<b[i+6]<b[i+7]<b[i+8]<b[i+9]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]<b[i+6]<b[i+7]<b[i+8]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]<b[i+6]<b[i+7]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]<b[i+6]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4]<b[i+5]||b[i]<b[i+1]<b[i+2]<b[i+3]<b[i+4])//顺子
 {
 cout<<"Stright poker";
 pokerid[6]=7;
 }
 else if((b[i]==b[i+1]==b[i+2]&&b[i+3]==b[i+4]==b[i+5]&&b[i+6]==b[i+7]==b[i+8]&&b[i+9]==b[i+10]==b[i+11]&&b[i+12]==b[i+13]&&b[i+14]&&b[i+15]&&b[i+16]&&b[i+17])||(b[i]==b[i+1]==b[i+2]&&b[i+3]==b[i+4]==b[i+5]&&b[i+6]==b[i+7]==b[i+8]&&b[i+9]==b[i+10]==b[i+11]&&b[i+12]==b[i+13]==b[i+14])||(b[i]==b[i+1]==b[i+2]&&b[i+3]==b[i+4]==b[i+5]&&b[i+6]==b[i+7]==b[i+8]&&b[i+9]==b[i+10]==b[i+11])||(b[i]==b[i+1]==b[i+2]&&b[i+3]==b[i+4]==b[i+5]&&b[i+6]==b[i+7]==b[i+8]))//三顺
 {cout<<"Three stright";
 pokerid[7]=8;
 }
 else if((b[i]==b[i+1]==b[i+2]&&b[i+3]==b[i+4]==b[i+5]&&b[i+6]!=0&&b[i+7]!=0&&b[i]+1==b[i+3])||(b[i+1]==b[i+2]==b[i+3]&&b[i+4]==b[i+5]==b[i+6]&&b[i]!=0&&b[i+7]!=0&&b[i+1]+1==b[i+4])||(b[i+2]==b[i+3]==b[i+4]&&b[i+5]==b[i+6]==b[i+7]&&b[i]!=0&&b[i+1]!=0&&b[i+2]+1==b[i+5]))//飞机带翅膀
 {
 cout<<"Plane poker";
 pokerid[8]=9;
 }
 
 
 }*/
class Player//注释：该类中使用string总是报错，由于不知道原因，故移至于cpp文件中
{
private:
    string name[3];
    int poker1[18];
    int poker2[18];
    int poker3[18];
public:
    Player();
    void show_every();
    void setting_name();
    void outputpoker(string a[18]);
    void outputtrans(string a[8]);
    void computer(int a[18],int b[18]);//电脑出牌
};

Player::Player()
{
    for(int i=0;i<18;i++)
    {
        poker1[i]=0;
        poker2[i]=0;
        poker3[i]=0;
    }
}
void Player::setting_name(){
    name[0]="John";
    name[1]="Jam";
    name[2]="You";
    
}
void Player::show_every()
{
    cout<<name[0]<<' '<<name[1]<<' '<<name[2]<<endl;
    Poker b;
    int a[54];
    b.set_ns();
    b.transform(a,54);
    for(int j=0;j<=17;j++)
    {
        poker1[j]=a[j];
        poker2[j]=a[j+18];
        poker3[j]=a[j+36];
    }
    b.paixu(poker1);
    b.paixu(poker2);
    b.paixu(poker3);
    for(int i=0;i<18;i++)
    {int a=poker1[i];
        int c=poker2[i];
        int d=poker3[i];
        cout<<poker1[i]<<' '<<poker2[i]<<' '<<poker3[i]<<endl;
        b.distinguish(a);
        cout<<" ";
        b.distinguish(c);
        cout<<" ";
        b.distinguish(d);
        cout<<endl;
    }
}
int b[10];
void Player::outputtrans(string a[18])//转化玩家输入的牌数
{
    
    for(int o=0;o<10;o++)
    {
        if(a[o]=="AB")
            b[o]=1;
        else if(a[o]=="AR")
            b[o]=2;
        else if(a[o]=="AS")
            b[o]=3;
        else if(a[o]=="AP")
            b[o]=4;
        else if(a[o]=="2B")
            b[o]=5;
        else if(a[o]=="2R")
            b[o]=6;
        else if(a[o]=="2S")
            b[o]=7;
        else if(a[o]=="2P")
            b[o]=8;
        else if(a[o]=="3B")
            b[o]=9;
        else if(a[o]=="3R")
            b[o]=10;
        else if(a[o]=="3S")
            b[o]=11;
        else if(a[o]=="3P")
            b[o]=12;
        else if(a[o]=="4B")
            b[o]=13;
        else if(a[o]=="4R")
            b[o]=14;
        else if(a[o]=="4S")
            b[o]=15;
        else if(a[o]=="4P")
            b[o]=16;
        else if(a[o]=="5B")
            b[o]=17;
        else if(a[o]=="5R")
            b[o]=18;
        else if(a[o]=="5S")
            b[o]=19;
        else if(a[o]=="5P")
            b[o]=20;
        else if(a[o]=="6B")
            b[o]=21;
        else if(a[o]=="6R")
            b[o]=22;
        else if(a[o]=="6S")
            b[o]=23;
        else if(a[o]=="6P")
            b[o]=24;
        else if(a[o]=="7B")
            b[o]=25;
        else if(a[o]=="7R")
            b[o]=26;
        else if(a[o]=="7S")
            b[o]=27;
        else if(a[o]=="7P")
            b[o]=28;
        else if(a[o]=="8B")
            b[o]=29;
        else if(a[o]=="8R")
            b[o]=30;
        else if(a[o]=="8S")
            b[o]=31;
        else if(a[o]=="8P")
            b[o]=32;
        else if(a[o]=="9B")
            b[o]=33;
        else if(a[o]=="9R")
            b[o]=34;
        else if(a[o]=="9S")
            b[o]=35;
        else if(a[o]=="9P")
            b[o]=36;
        else if(a[o]=="10B")
            b[o]=37;
        else if(a[o]=="10R")
            b[o]=38;
        else if(a[o]=="10S")
            b[o]=39;
        else if(a[o]=="10P")
            b[o]=40;
        else if(a[o]=="JB")
            b[o]=41;
        else if(a[o]=="JR")
            b[o]=42;
        else if(a[o]=="JS")
            b[o]=43;
        else if(a[o]=="JP")
            b[o]=44;
        else if(a[o]=="QB")
            b[o]=45;
        else if(a[o]=="QR")
            b[o]=46;
        else if(a[o]=="QS")
            b[o]=47;
        else if(a[o]=="QP")
            b[o]=48;
        else if(a[o]=="KB")
            b[o]=49;
        else if(a[o]=="KR")
            b[o]=50;
        else if(a[o]=="KS")
            b[o]=51;
        else if(a[o]=="KP")
            b[o]=52;
        else if(a[o]=="BK")
            b[o]=53;
        else if(a[o]=="RK")
            b[o]=54;
    }
}
void Player::outputpoker(string a[8])//玩家输入的牌数,判断是否输入正确
{
    for(int i=0;i<8;i++)
    {
        a[i]="0";
    }
    int j=0;
    while(a[j]=="\n")
    {
        cin>>a[j];
        j++;
    }//输入回车时本次出牌结束
    outputtrans(a);
    for(int k=0;k<8;k++)
        for(int h=0;h<18;h++)
        {
            if(b[k]==poker3[h]) continue;
            else cout<<"Input Wrong!"<<endl;
        }
}
void Player::computer(int a[18],int b[18])//b为电脑要出牌,a是人或电脑出的牌，最难的一步了，宝宝只能先做一个智障的电脑了
{
    Competition c;
    c.paixu(a);
    c.judge(a);//判断出上一家出的牌型
    int t1=0,t2=0;
    for(int i=0;i<18;i++)
        if(a[i]!=0)
        {
            t1++;
        }
    for(int i=0;i<18;i++)
        if(b[i]!=100)
        {
            t2++;
        }
    cout<<t2<<endl;
    int t=0;
    t=c.style;
    Poker m;
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;//临时变量用于替换数组
    if(t1==1)//出一张别他大的
    {
        for(int i=0;i<t2;i++)
        {
            while(b[i]/4>a[0]/4)
            {
                a1=b[i];
                m.distinguish(a1);
                b[i]=0;
                break;
            }//终止的同时，还要减少剔除原牌数，输出所处的牌数，电脑的牌数减少
        }
    }
    else if(t1==2)//两张比较
    {
        for(int i=0;i<t2;i++)
        {
            if(b[i]/4>a[0]/4&&b[i]/4==b[i+1]/4)//满足条件是b中的一个牌大于a【0】，同时还要与其下一个相等，否则不知道是否是对牌
            {a1=b[i];a2=b[i+1];
                m.distinguish(a1);
                m.distinguish(a2);
                b[i]=100;b[i+1]=100;
                break;
            }
        }
    }
    else if(t1==3)//三张比较
    {
        for(int i=0;i<t2;i++)
        {
            if(b[i]/4>a[0]/4&&b[i]/4==b[i+1]/4&&b[i]/4==b[i+2]/4)//It's same to two pokers.
            {
                a1=b[i];a2=b[i+1];a3=b[i+2];
                m.distinguish(a1);
                m.distinguish(a2);
                m.distinguish(a3);
                b[i]=100;b[i+1]=100;b[i+2]=100;
                break;
                
            }
        }
        
    }
    else if(t1==4)//四张牌比较，分为三带一与炸弹比较
    {   if(c.style==1)//三带一
    {
        for(int i=0;i<t2;i++)
        {
            int j=0;
            if(b[i]/4==b[i+1]/4&&b[i+1]/4==b[i+2]/4&&b[i]/4>a[0]/4)//三带一判断是否为三张相同的牌
            {
                a1=b[i];a2=b[i+1];a3=b[i+2];
                for(j=0;j<18;j++)
                {
                    if(b[j]!=100&&b[j]!=b[i]&&b[j]!=b[i+1]&&b[j]!=b[i+2])
                    { a4=b[j];
                        break;
                    }
                }
                m.distinguish(a1);
                m.distinguish(a2);
                m.distinguish(a3);
                m.distinguish(a4);
                b[i]=100;b[i+1]=100;b[i+2]=100;b[j]=100;
                break;
            }
        }
    }
    else if(c.style==2)//同为炸弹时出牌方式
    {
        for(int i=0;i<t2;i++)
        {
            if(b[i]/4==b[i+1]/4&&b[i+1]/4==b[i+2]/4&&b[i+2]/4==b[i+3]/4&&b[i]/4>a[2]/4)
            {
                a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];
                m.distinguish(a1);
                m.distinguish(a2);
                m.distinguish(a3);
                m.distinguish(a4);
                b[i]=100;b[i+1]=100;b[i+2]=100;b[i+4]=100;
                break;
            }
        }
    }
    }
    else if(t1==5)
    {
        if(c.style==3)//三带二    WRONG   !!!!!!!!!!!!!!!!!!!!!!
        { int j1=0;
            for(int i=0;i<t2;i++)
            {
                if(b[i]/4==b[i+1]/4&&b[i+1]/4==b[i+2]/4&&b[i]/4>a[2]/4)//cccc 只需要找到一张比这三张大的之一即可
                {   a1=b[i];a2=b[i+1];a3=b[i+2];
                    for(j1=0;j1<t2;j1++)
                    {
                        if(b[j1]/4!=b[i]/4&&b[j1]/4!=b[i+1]/4&&b[j1]/4!=b[i+2]/4&&b[j1+1]/4==b[j1]/4)//ccc
                        {
                            a4=b[j1];a5=b[j1+1];
                            break;
                            
                        }
                    }
                    m.distinguish(a1);
                    m.distinguish(a2);
                    m.distinguish(a3);
                    m.distinguish(a4);
                    m.distinguish(a5);
                    b[i]=100;b[i+1]=100;b[i+2]=100;b[j1]=100;b[j1+1]=100;
                    break;
                }
                
            }
        }
        else if(c.style==4)//5顺子
        {
            for(int i=0;i<t2;i++)
            {
                for(int i=4;i<18;i++)
                {
                    
                    if((b[i]/4)+1==b[i+1]/4&&(b[i+1]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==(b[i+3]/4)&&(b[i+3]/4)+1==(b[i+4]/4)&&b[i+4]/4>a[4]/4)//此处五顺必须为五个连着的顺子，否则不能识别
                    {
                        a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];
                        m.distinguish(a1);
                        m.distinguish(a2);
                        m.distinguish(a3);
                        m.distinguish(a4);
                        m.distinguish(a5);
                        b[i]=100;b[i+1]=100;b[i+2]=100;b[i+3]=100;b[i+4]=100;
                        break;
                    }
                    
                    
                    
                }
            }
        }
        
    }
    else if(t1==6)
    {
        if(c.style==5)//四带二啊啊啊啊
        {
            for(int i=0;i<t2;i++)
            {
                if(b[i]/4>a[2]/4&&b[i]/4==b[i+1]/4&&b[i]/4==b[i+2]/4&&b[i]/4==b[i+3]/4){
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];
                    for(int j1=0;j1<t2;j1++)
                    {
                        if(b[j1]/4!=b[i]/4&&b[j1+1]/4==b[j1]/4)
                        {
                            a5=b[j1];a6=b[j1+1];
                            break;
                        }
                        
                        m.distinguish(a1);
                        m.distinguish(a2);
                        m.distinguish(a3);
                        m.distinguish(a4);
                        m.distinguish(a5);
                        m.distinguish(a6);
                        b[i]=100;b[i+1]=100;b[i+2]=100;b[j1]=100;b[j1+1]=100;b[i+3]=100;
                        break;
                    }
                }
            }
        }
        else if(c.style==6)//三对对牌,必须是三张连着的牌
        {
            for(int i=0;i<t2;i++)
            {
                if(b[i]/4==b[i+1]/4&&b[i+2]/4==b[i+3]/4&&b[4+i]/4==b[i+5]/4&&(b[i]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==b[i+4]/4&&b[4+i]/4>a[5]/4)//两张分别相等                       间隔之间差一          最大的要比上家大
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];
                    break;
                    
                }
                
                m.distinguish(a1);
                m.distinguish(a2);
                m.distinguish(a3);
                m.distinguish(a4);
                m.distinguish(a5);
                m.distinguish(a6);
                b[i]=100;b[i+1]=100;b[i+2]=100;b[i+4]=100;b[i+5]=100;b[i+3]=100;
                break;
            }
        }
        else if(c.style==7)//6顺
        {
            for(int i=0;i<t2;i++)
            {
                if((b[i]/4)+1==b[i+1]/4&&(b[i+1]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==(b[i+3]/4)&&(b[i+3]/4)+1==(b[i+4]/4)&&(b[i+4]/4)+1==b[i+5]/4&&b[i+5]/4>a[5]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];
                    m.distinguish(a1);
                    m.distinguish(a2);
                    m.distinguish(a3);
                    m.distinguish(a4);
                    m.distinguish(a5);
                    m.distinguish(a6);
                    b[i]=100;b[i+1]=100;b[i+2]=100;b[i+3]=100;b[i+4]=100;b[i+5]=100;
                    break;
                }
            }
        }
        
        
    }
    else if(t1==7)
    {
        if(c.style==13)
        {
            for(int i=0;i<t2;i++)//7顺
            {
                if((b[i]/4)+1==b[i+1]/4&&(b[i+1]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==(b[i+3]/4)&&(b[i+3]/4)+1==(b[i+4]/4)&&(b[i+4]/4)+1==b[i+5]/4&&(b[i+5]/4)==b[i+6]/4&&b[i+6]/4>a[6]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];a7=b[i+6];
                    m.distinguish(a1);
                    m.distinguish(a2);
                    m.distinguish(a3);
                    m.distinguish(a4);
                    m.distinguish(a5);
                    m.distinguish(a6);
                    m.distinguish(a7);
                    b[i]=100;b[i+1]=100;b[i+2]=100;b[i+3]=100;b[i+4]=100;b[i+5]=100;b[i+6]=100;
                    break;
                }
                
                
            }
        }
        
    }
    else if(t1==8)
    {
        if(c.style==8)
        {
            for(int i=0;i<t2;i++)
            {
                if((b[i]/4)+1==b[i+1]/4&&(b[i+1]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==(b[i+3]/4)&&(b[i+3]/4)+1==(b[i+4]/4)&&(b[i+4]/4)+1==b[i+5]/4&&(b[i+5]/4)+1==b[i+6]/4&&(a[i+6]/4)+1==b[i+7]&&b[i+7]/4>a[7]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];a7=b[i+6];a8=b[i+7];
                    m.distinguish(a1);
                    m.distinguish(a2);
                    m.distinguish(a3);
                    m.distinguish(a4);
                    m.distinguish(a5);
                    m.distinguish(a6);
                    m.distinguish(a7);
                    m.distinguish(a8);
                    b[i]=100;b[i+1]=100;b[i+2]=100;b[i+3]=100;b[i+4]=100;b[i+5]=100;b[i+6]=100;b[i+7]=100;
                    break;
                }
                
                
            }
        }
        else if(c.style==9)//四双顺33445566
        {
            for(int i=0;i<t2;i++)
            {
                if(b[i]/4==b[i+1]/4&&b[i+2]/4==b[i+3]/4&&b[4+i]/4==b[i+5]/4&&b[i+6]/4==b[i+7]&&(b[i]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==b[i+4]/4&&(b[i+4]/4)+1==(b[i+6]/4)&&b[7+i]/4>a[7]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];a7=b[i+6];a8=b[i+7];
                    break;
                    
                }
                
                m.distinguish(a1);
                m.distinguish(a2);
                m.distinguish(a3);
                m.distinguish(a4);
                m.distinguish(a5);
                m.distinguish(a6);
                m.distinguish(a7);
                m.distinguish(a8);
                b[i]=100;b[i+1]=100;b[i+2]=100;b[i+4]=100;b[i+5]=100;b[i+3]=100;b[i+6]=100;b[i+7]=100;
                break;
                
                
                
                
            }
        }
        else if(c.style==10)//飞机带翅膀
        {
            for(int i=0;i<t2;i++)
            {
                if(b[i]/4==b[i+1]/4&&b[i+1]/4==b[i+2]/4&&(b[i+2]/4)+1==b[i+4]&&b[i+3]/4==b[i+4]/4&&b[i+4]/4==b[i+5]/4&&b[i+3]/4>a[5]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];
                    for(int j=0;j<t2;j++)
                    {
                        if(b[j]/4!=b[i]/4&&b[j]/4!=b[j+3]&&b[j+1]/4!=b[i]/4&&b[j+1]/4!=b[j+3])
                        {
                            a7=b[i+6];a8=b[i+7];
                            break;
                            
                        }
                        m.distinguish(a1);
                        m.distinguish(a2);
                        m.distinguish(a3);
                        m.distinguish(a4);
                        m.distinguish(a5);
                        m.distinguish(a6);
                        m.distinguish(a7);
                        m.distinguish(a8);
                        b[i]=100;b[i+1]=100;b[i+2]=100;b[i+4]=100;b[i+5]=100;b[i+3]=100;b[j]=100;b[j+1]=100;
                        break;
                    }
                    
                }
            }
        }
        
        
    }
    else if(t1==9)
    {
        if(c.style==11)//三对顺
        {
            for(int i=0;i<t2;i++)
            {
                if(b[i]/4==b[i+1]/4&&b[i+1]/4==b[i+2]/4&&(b[i+2]/4)+1==b[i+4]&&b[i+3]/4==b[i+4]/4&&b[i+4]/4==b[i+5]/4&&b[i+6]/4==b[i+7]/4&&b[i+7]/4==b[i+8]/4&&(a[i+5]/4+1)==a[i+6]/4&&b[i+8]/4>a[8]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];a7=b[i+6];a8=b[i+7];a9=b[i+8];
                    break;
                    
                }
                m.distinguish(a1);
                m.distinguish(a2);
                m.distinguish(a3);
                m.distinguish(a4);
                m.distinguish(a5);
                m.distinguish(a6);
                m.distinguish(a7);
                m.distinguish(a8);
                b[i]=100;b[i+1]=100;b[i+2]=100;b[i+4]=100;b[i+5]=100;b[i+3]=100;b[i+6]=100;b[i+7]=100;b[i+8]=100;
                break;
            }
        }
        else if(c.style==12)
        {
            for(int i=0;i<t2;i++)
            {
                if((b[i]/4)+1==b[i+1]/4&&(b[i+1]/4)+1==(b[i+2]/4)&&(b[i+2]/4)+1==(b[i+3]/4)&&(b[i+3]/4)+1==(b[i+4]/4)&&(b[i+4]/4)+1==b[i+5]/4&&(b[i+5]/4)+1==b[i+6]/4&&(b[i+6]/4)+1==b[i+7]/4&&(a[i+7]/4)+1==a[i+8]/4&&b[i+6]/4>a[6]/4)
                {
                    a1=b[i];a2=b[i+1];a3=b[i+2];a4=b[i+3];a5=b[i+4];a6=b[i+5];a7=b[i+6];
                    m.distinguish(a1);
                    m.distinguish(a2);
                    m.distinguish(a3);
                    m.distinguish(a4);
                    m.distinguish(a5);
                    m.distinguish(a6);
                    m.distinguish(a7);
                    b[i]=100;b[i+1]=100;b[i+2]=100;b[i+3]=100;b[i+4]=100;b[i+5]=100;b[i+6]=100;
                    break;
                }
            }//老子终于写完最难写的地方了，妈的，妈的，还有那么多bug，不管了，明天再写，洗洗睡
        }
    }
}
int main()
{
    srand((unsigned)time(0));
    Player p1;
    p1.setting_name();//玩家设定名字
    p1.show_every();//分玩牌
    //判断谁先出牌，
    for(int i=0;i<18;i++)
    {
        
    }
    return 0;
}
