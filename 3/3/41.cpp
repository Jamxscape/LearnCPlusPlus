//
//  41.cpp
//  3
//
//  Created by 马元 on 2016/12/27.
//  Copyright © 2016年 MaYuan. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <time.h>
#define d 100
using namespace std;
int main41()
{
    int a[3][4]={{1},{5},{9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
