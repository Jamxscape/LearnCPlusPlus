//
//  34.cpp
//  3
//
//  Created by 马元 on 2016/12/25.
//  Copyright © 2016年 MaYuan. All rights reserved.
//请你编程画一个放大的’X’。如3*3的’X’应如下所示：
/*
X X
 X
X X
5*5的’X’如下所示：
X   X
 X X
  X
 X X
X   X
Input输入数据第一行是一个整数T，表示有T组测试数据；
接下来有T行，每行有一个正奇数n（3 <= n <= 79），表示放大的规格。
Output对于每一个n打印一个规格为n * n放大的’X’；每组输出后面空一行。*/
#include <iostream>
using namespace std;
int main34()
{
    int n,T;
    cin>>T;
    for(int k=0;k<T;k++)
    {
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i||j==n-i+1)
                cout<<'X';
            else
            cout<<" ";
            
        }
        cout<<endl;
    }cout<<endl;
    }
    return 0;
}
