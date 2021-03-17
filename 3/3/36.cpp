//
//  36.cpp
//  3
//
//  Created by 马元 on 2016/12/26.
//  Copyright © 2016年 MaYuan. All rights reserved.
//费马大定律。2000以内有3956个勾股数。


#include <iostream>
#include <cmath>
#define d 10000
using namespace std;
int main36()
{
    unsigned long long int x,y,z,m=0;
    for(x=3;x<d/2;x++)
        for(y=2;y<d;y++)
            for(z=2;z<d;z++)
                if(x*x+y*y==z*z&&x!=y&&y!=z&&x!=z)cout<<x<<" "<<y<<" "<<z<<endl,m++;
    
    cout<<m;
    return 0;
}
