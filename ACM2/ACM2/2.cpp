//
//  2.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-1.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//
#include <iostream>
using namespace std;
int main2(){
    int n;
    int *p=new int[100];
    int a[9],b[9],c[9];
    int h=0,l=0;;
    cin>>n;
    int q=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>a[j];
        }
        h=0;l=0;
        for(int k=8;k>=1;k--)
        {
            if(a[0]>a[k]){b[h]=a[k];h++;}
        }
        for(int u=1;u<9;u++)
        {
            if(a[0]<=a[u]){c[l]=a[u];l++;}
            
        }
        for(int v=0;v<h;v++)
        {p[q]=b[v];q++;}
        p[q]=a[0];q++;
        for(int z=0;z<l;z++)
        {  p[q]=c[z];q++;}
    }
    for(int w=0;w<q;w++)
    {
        cout<<p[w]<<' ';
        if((w+1)%9==0)cout<<endl;
    }
    delete []p;
    return 0;
}

