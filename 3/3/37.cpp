//
//  37.cpp
//  3
//
//  Created by 马元 on 2016/12/26.
//  Copyright © 2016年 MaYuan. All rights reserved.
//数论中有许多猜想尚未解决，其中有一个被称为“角谷猜想”的问题，该问题在五、六十年代的美国多个著名高校中曾风行一时，这个问题是这样描述的：任何一个大于一的自然数，如果是奇数，则乘以三再加一；如果是偶数，则除以二；得出的结果继续按照前面的规则进行运算，最后必定得到一。现在请你编写一个程序验证他的正确性。本题有多个测试数据组，第一行为测试数据组数N，接着是N行的正整数。Output输出验证“角谷猜想”过程中的奇数，最后得到的1不用输出；每个测试题输出一行；每行中只有两个输出之间才能有一个空格；如果没有这样的输出，则输出：No number can be output !。

#include <iostream>
#include <cmath>
#include <time.h>
#define d 100
using namespace std;
int main37()
{
    unsigned long long int m;
    clock_t start,finish;
    double totaltime;
    start=clock();
    
    for(int i=2;i<d;i++)
    {m=i;
        do
        {
    if(m%2==0)m=m/2;
    else if(m%2!=0)m=3*m+1;
            if(m==1)cout<<i<<"满足"<<endl;
        /*n++;
        cout<<n<<' '<<m<<endl;*/
        }while(m!=1);
    }
    finish=clock();
    totaltime=finish-start;
    cout<<"\n此程序的运行时间为"<<totaltime<<"秒！"<<endl;
    return 0;
}
