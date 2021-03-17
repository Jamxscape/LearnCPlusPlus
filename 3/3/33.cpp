//
//  33.cpp
//  3
//
//  Created by 马元 on 2016/12/25.
//  Copyright © 2016年 MaYuan. All rights reserved.
//分割字符串


#include <stdio.h>
#include <string.h>

int main33()
{
    char s[]="aaa,aaa";
    const char *d = " ,*";
    char *p1;
    p1= strtok(s,d);
    while(p1)
    {
        printf("%s\n",p1);
        p1=strtok(NULL,d);
    }
    return 0;
}
