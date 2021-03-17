//
//  32.cpp
//  3
//
//  Created by 马元 on 2016/12/25.
//  Copyright © 2016年 MaYuan. All rights reserved.
//改进版计算器。。。。。

#include <sstream>
#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#define π 3.141592658
#define hh 10
using namespace std;
int main32()
{
    string k;
    double *a,v=0,d=0,*c;
    int n,i=0,j=0,f=0,g=0,i1,j1,f1,g1,x,u,y;
    char b;
    getline(cin,k);
    n=k.length();
    a=new double[n];
    c=new double[n];
    for(x=0;x<k.length();x++)
    {
        if(k[0]>=48&&k[0]<=57)
        {a[i]=k[x];
            i++;
        }
        else if(k[x]=='.')break;
    }i1=i;
     for(u=0;u<i1;u++)
        {
           v=a[u]*pow(hh,i)+v;
            i--;
        }
    for(x=i1+2;x<k.length();x++)
    {
        if(k[i1+1]>=48&&k[0]<=57)
        {a[i+j+1]=k[x];
            j++;
        }
       while(k[x]==43||95||42||47||94)b=k[x];
    }j1=j;
        for(u=i1+1;u<=j1;u--)
        {
            v=a[u]*pow(n,-j)+v;
            j--;
        }
    for(x=i1+j1+1;x<k.length();x++)
    {
        if(k[x]>=48&&k[x]<=57)
        {c[f]=k[x];
            f++;
        }
        else if(k[x]=='.')break;
    }f1=f;
      for(y=0;y<f1;y++)
        {
            d=c[y]*pow(hh,f)+d;
            f--;
        }
    for(x=i1+j1+2+f1;x<k.length();x++)
    {
        if(k[x]>=48&&k[x]<=57)
        {c[g]=k[x];
            g++;
        }
    }
        for(y=f1+1;y<=j1;y--)
        {
            d=a[y]*pow(n,-g)+d;
            g--;
        }  g1=g;
    switch(b)
    {
        case '+':cout<<v+d<<endl;break;
        case '-':cout<<v-d<<endl;break;
        case '*':cout<<setprecision(6)<<v*d<<endl;break;
        case '/':cout<<setprecision(6)<<v/d<<endl;break;
        case '^':cout<<setprecision(6)<<pow(v,d)<<endl;break;
    }


        return 0;
}
    /*{a[i]=k[x];
            i++;
        }
        else if(k[x]=='.')
          if(k[x]>=48&&k[x]<=57)
                {a[i+j+1]=k[x];
                    j++;
                 }
        else if(k[x]=='+'||'-'||'*'||'/'||'^')b=k[x];
        if(k[x]>=48&&k[x]<=57)
        {c[f]=k[x];
            f++;
        }
        else if(k[x]=='.')
        {
            for(int z=i;x<n;x++)
                if(k[x]>=48&&k[x]<=57)
                {c[f+g+1]=k[x];
                    g++;
                }
         
        }*/    
      /*int h=0;
        if(k=="gen")h=0;
        else if(k=="sin")h=1;
        else if(k=="cos")h=2;
        else if(k=="tan")h=3;
        else if(k=="sec")h=4;
        else if(k=="csc")h=5;
        else if(k=="cot")h=6;
        cin>>s;
        switch(h)
        {
            case 0:cout<<setprecision(6)<<sqrt(s)<<endl;break;
            case 1:cout<<setprecision(6)<<sin(s)<<endl;break;
            case 2:cout<<setprecision(6)<<cos(s)<<endl;break;
            case 3:cout<<setprecision(6)<<tan(s)<<endl;break;
            case 4:cout<<setprecision(6)<<1/(cos(s))<<endl;break;
            case 5:cout<<setprecision(6)<<1/(sin(s))<<endl;break;
            case 6:cout<<setprecision(6)<<1/(tan(s))<<endl;break;
            default:break;
        }*/

