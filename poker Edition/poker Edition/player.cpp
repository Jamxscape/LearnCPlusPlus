//
//  player.cpp
//  poker Edition
//
//  Created by 马元 on 2017/4/11.
//  Copyright © 2017年 MaYuan. All rights reserved.
//

#include <iostream>
#include <string>
#include "poker setting.cpp"
int b[10];//玩家出的牌数
#include "competition.cpp"
using namespace std;

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
