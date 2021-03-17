//
//  21.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//

#include<iostream>
#include <cmath>
using namespace std;
int main21()
{
    int n=0,h;
    cin>>h;
    for(int i=2;i<=sqrt(h);i++)
      if(h%i==0) n=1;
    if(n==0)cout<<h<<"是素数"<<endl;
    else cout<<h<<"不是素数"<<endl;
    return 0;
}
