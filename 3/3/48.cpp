//
//  48.cpp
//  3
//
//  Created by 马元 on 2017/1/3.
//  Copyright © 2017年 MaYuan. All rights reserved.
//速算24点相信绝大多数人都玩过。就是随机给你四张牌，包括A(1),2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)。要求只用'+','-','*','/'运算符以及括号改变运算顺序，使得最终运算结果为24(每个数必须且仅能用一次)。游戏很简单，但遇到无解的情况往往让人很郁闷。你的任务就是针对每一组随机产生的四张牌，判断是否有解。我们另外规定，整个计算过程中都不能出现小数。
#include <iostream>
#include <cmath>
using namespace std;
int main48()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
        if(a+b+c+d==24)
            cout<<a<<'+'<<b<<'+'<<c<<'+'<<d<<endl;
        if(a+b+c-d==24)
            cout<<a<<'+'<<b<<'+'<<c<<'-'<<d<<endl;
         if(a+b+c*d==24)
             cout<<a<<'+'<<b<<'+'<<c<<'*'<<d<<endl;
        if(a+b+c/d==24)
        cout<<a<<'+'<<b<<'+'<<c<<'/'<<d<<endl;
        if(a+b-c+d==24)
        cout<<a<<'+'<<b<<'-'<<c<<'+'<<d<<endl;
        if(a+b-c-d==24)
            cout<<a<<'+'<<b<<'-'<<c<<'-'<<d<<endl;
        if(a+b-c*d==24)
            cout<<a<<'+'<<b<<'-'<<c<<'*'<<d<<endl;
        if(a+b-c/d==24)
            cout<<a<<'+'<<b<<'-'<<c<<'/'<<d<<endl;
        if(a+b*c+d==24)
            cout<<a<<'+'<<b<<'*'<<c<<'+'<<d<<endl;
        if(a+b*c-d==24)
            cout<<a<<'+'<<b<<'*'<<c<<'-'<<d<<endl;
        if(a+b*c*d==24)
            cout<<a<<'+'<<b<<'*'<<c<<'*'<<d<<endl;
        if(a+b*c/d==24)
            cout<<a<<'+'<<b<<'*'<<c<<'/'<<d<<endl;
        
        
        
        
        
        
        
        
        /*char f[4];
    int n=0;
    f[0]='+';
    f[1]='-';
    f[2]='*';
    f[3]='/';
    for(int i=0;i<4;i++)
    {   for(int j=0;j<4;j++)
            for(int k=0;k<4;k++)
            {n++;
                cout<<"a"<<f[i]<<"b"<<f[j]<<"c"<<f[k]<<"d"<<"==24"<<endl;
            }
    
    
    
        cout<<n;
    
    }*/
    
    return 0;
}
