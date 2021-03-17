//
//  competition.cpp
//  poker Edition
//
//  Created by 马元 on 2017/4/25.
//  Copyright © 2017年 MaYuan. All rights reserved.
//
#include <iostream>
#include "competition.cpp"
#include "poker setting.cpp"
#include "player.cpp"
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
