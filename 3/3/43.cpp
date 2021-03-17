//
//  43.cpp
//  3
//
//  Created by 马元 on 2016/12/31.
//  Copyright © 2016年 MaYuan. All rights reserved.
//把一个偶数拆成两个不同素数的和，有几种拆法呢？Input输入包含一些正的偶数，其值不会超过10000，个数不会超过500，若遇0，则结束。Output对应每个偶数，输出其拆成不同素数的个数，每个结果占一行。

#include <iostream>
using namespace std;
int main43()
{
    int a,i,j,*n,m,w=0;
    cin>>a;
    n=new int(a);
    n[0]=1;
    n[1]=1;
    for(i=2;i<=a;i++)
        n[i]=0;
        for(i=2;i<=a;i++)
        for(j=i+i;j<=a;j=j+i)
            n[j]=1;
    for(i=2;i<a;i++)
    if(n[i]==0)cout<<i<<' ';
    cout<<endl;
   for(i=2;i<(a/2+1);i++)
    { if(n[i]==0)
        {
            m=a-i;
            if(n[m]==0)
            {w++;
            cout<<i<<' '<<m<<endl;
            }
        }
    }
    cout<<w<<endl;
    
    
    
        return 0;
}
/*int a,i,j,*n,m=0,*p;
    cin>>a;
    n=new int(a);

        for(i=2;i<a;i++)
            for(j=i+i;j<a;j=j+i)
                n[i]=1;
        for(i=2;i<a;i++)
        if(n[i]==1)
        {
            m++;
        }
    p=new int(m);
    for(i=2;i<a;i++)
        for(j=0;j<m;j++)
            if(n[i]==1)p[j]=i;
   for(
       */
