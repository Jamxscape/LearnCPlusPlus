//
//  poker setting.cpp
//  poker Edition
//
//  Created by 马元 on 2017/4/11.
//  Copyright © 2017年 MaYuan. All rights reserved.
//

#include <iostream>
#include <time.h>
using namespace std;
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
