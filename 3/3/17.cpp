//
//  17.cpp
//  3
//
//  Created by 马元 on 2016/12/22.
//  Copyright © 2016年 MaYuan. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main17()
{
    string a;
    cin>>a;
    double j;
    if(a=="sin")
    {
        
        cin>>j;
        cout<<setprecision(6)<<sin(j)<<endl;
    }
    else if(a=="cos")
    {
        
        cin>>j;
        cout<<setprecision(6)<<cos(j)<<endl;
    }
    else if(a=="tan")
    {
        
        cin>>j;
        cout<<setprecision(6)<<tan(j)<<endl;
    }
    else if(a=="sec")
    {
        
        cin>>j;
        cout<<setprecision(6)<<1/(cos(j))<<endl;
    }
    else if(a=="csc")
    {
        
        cin>>j;
        cout<<setprecision(6)<<1/(sin(j))<<endl;
    }
    else if(a=="cot")
    {
        
        cin>>j;
        cout<<setprecision(6)<<1/(tan(j))<<endl;
    }
    return 0;
}
