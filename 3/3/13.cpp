//
//  13.cpp
//  3
//
//  Created by 马元 on 2016/12/21.
//  Copyright © 2016年 MaYuan. All rights reserved.
//输入6位数组：1 2 3 4 5 6
//6 5 4 3 2 1
//1 6 5 4 3 2
//2 1 6 5 4 3
//3 2 1 6 5 4
//4 3 2 1 6 5

#include <iostream>
using namespace std;
int main13()
{
    int a[6],i,t,d,l,u;
    cout<<"输入6位数组：";
    for(i=0;i<6;i++)
        cin>>a[i];
    int j,k;
    for(j=0;j<=5;j++)
    {
        k=j;
        for(i=j+1;i<6;i++)
            if(a[i]>a[k])
                k=i;
        if(k!=j)
        {
            t=a[j];
            a[j]=a[k];
            a[k]=t;
        }
    }
    for(i=0;i<6;i++)
        cout<<a[i]<<" ";
    cout<<endl;
       for(l=0;l<4;l++)
       {
          /* d=a[0];
           a[0]=a[5];
           for(i=0;i<5;i++)
           {
               u=a[i+1];
              a[i+1]=d;
               d=a[i+2];
               a[i+2]=u;
            
               
               
           }
           for(i=0;i<6;i++)
               cout<<a[i]<<" ";
           cout<<endl;*/

           d=a[0];
           a[0]=a[5];
           i=a[1];
           a[1]=d;
           d=a[2];
           a[2]=i;
           i=a[3];
           a[3]=d;
           d=a[4];
           a[4]=i;
           i=a[5];
           a[5]=d;
           for(u=0;u<6;u++)
               cout<<a[u]<<" ";
           cout<<endl;
        
        
        /*g=a[5];
    cout<<g<<" ";
 
   for(i=0;i<5;i++)
   {
       d=a[i+1];
    a[i+1]=a[i];
    cout<<a[i+1]<<" ";
       if((i+1)==5)break;//当a[5]求解完时，不再保留原来的a[5]
       a[i+1]=d;
   }cout<<endl;
        a[0]=g;*/

   }
    return 0;
}
