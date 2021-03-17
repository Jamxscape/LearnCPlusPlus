//
//  47.cpp
//  3
//
//  Created by 马元 on 2017/1/3.
//  Copyright © 2017年 MaYuan. All rights reserved.
//大家提到LTC都佩服的不行，不过，如果竞赛只有这一个题目，我敢保证你和他绝对在一个水平线上！你的任务是：计算方程x^2+y^2+z^2= num的一个正整数解。Input输入数据包含多个测试实例，每个实例占一行，仅仅包含一个小于等于10000的正整数num。
#include <iostream>
#include <cmath>
using namespace std;
int main47()
{
    int num,t,q,o,k;
    cin>>num;
    for(int x=1;x<num;x++)
    {
        
    for(int y=1;y<num;y++)
              for(int z=1;z<num;z++)
              {
                 if(x*x+y*y+z*z==num)
                 {
                     o=x;
                     q=y;
                     t=z;
                     if(q>o)
                     {
                         k=o;
                         o=q;
                         q=k;
                     }
                     if(t>q)
                     {
                         k=q;
                         q=t;
                         t=k;
                     }
                     if(t>o)
                     {
                         k=o;
                         o=t;
                         t=k;
                     }
                     
                     cout<<o<<' '<<q<<' '<<t<<endl;
                 }
              }
    }
    return 0;
}
