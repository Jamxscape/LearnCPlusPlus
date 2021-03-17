//
//  main.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-1.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main1() {
    int d[100],m[100],y[100],a[100];
    //char h;
    int n=0;
    while(scanf("%d/%d/%d",&m[n],&d[n],&y[n])!=EOF)
    {
        n++;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=d[i]+100*m[i]+10000*y[i];
    }
    sort(a,a+n);
    for(int j=0;j<n;j++)
    {
        int day;
        int mon;
        int year;
        day=a[j]%100;
        mon=(a[j]%10000-day)/100;
        year=a[j]/10000;
        printf("%02d/%02d/%d\n",mon,day,year);
    }
    return 0;
}
