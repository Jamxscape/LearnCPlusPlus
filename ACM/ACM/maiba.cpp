//
//  maiba.cpp
//  ACM
//
//  Created by 马元 on 2017/5/19.
//  Copyright © 2017年 MaYuan. All rights reserved.
//二维动态数组

#include <iostream>
using namespace std;
int main2()
{
   int i=0,j=0;//i是行 j是列
    cin>>i>>j;
    int **p=new int*[i];
    for(int u=0;u<i;u++)
        p[u]=new int[j];
    for(int k=0;k<i;k++)
        for(int h=0;h<j;h++)
            cin>>p[k][h];
    for(int k=0;k<i;k++)
    {  for(int h=0;h<j;h++)
            cout<<p[k][h]<<' ';
        cout<<endl;
    }
    //方法一
    //申请空间
    /*iint row,column;
    cin>>row>>column;nt **a = new int *[row];
    for(int i = 0;i < row;i++)
        a[i] = new int[column];
    
    //使用空间
    for(int j = 0;j < row;j++)
        for(int k = 0;k< column;k++)
            a[j][k] = rand()%100;
    
    for(int j = 0;j < row;j++)
    {
        cout<<endl;
        for(int k = 0;k< column;k++)
        {
            a[j][k] = rand()%100;
            cout<<a[j][k]<<"     ";
        }
    }
    
    //释放空间
    for(int i = 0;i < row;i++)
    {
        delete a[i];
        a[i] = NULL;
    }
    delete a[row];
    a = NULL;
    
    return 0;*/
    return 0;
}
