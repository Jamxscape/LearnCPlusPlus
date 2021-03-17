//
//  main.c
//  Clanguage
//
//  Created by 马元 on BE 2561/10/8.
//  Copyright © 2561 MaYuan. All rights reserved.
//

#include <stdio.h>
int main1() {
    int a[200000];
    int n=200,i,j,b=100;
    for(i=2;i<=n;i++)
    for(j=i+i;j<=n;j=j+i)
    a[j]=1;
    for(i=b;i<=n;i++)
    if(a[i]==0)
    printf("%d ",i);
    return 0;
}
