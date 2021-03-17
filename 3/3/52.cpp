//
//  52.cpp
//  3
//
//  Created by 马元 on 2017/3/21.
//  Copyright © 2017年 MaYuan. All rights reserved.
//

#include <iostream>
using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int sec;
    void set_hour()
    {
        cin>>hour;
        
    }
    void set_minute()
    {
        cin>>minute;
        
    }
    void set_sec()
    {
        cin>>sec;
        
    }
    void print_res()
    {
        cout<<hour<<":"<<minute<<":"<<sec<<endl;
    }
    
};

int main52()
{
    
    Time t1;
    t1.set_hour();
    t1.set_minute();
    t1.set_sec();
    t1.print_res();
    return 0;
    
}
