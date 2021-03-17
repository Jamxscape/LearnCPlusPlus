//
//  51.cpp
//  3
//
//  Created by 马元 on 2017/3/21.
//  Copyright © 2017年 MaYuan. All rights reserved.
//

#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int sec;
public:
    void set_hour();
    void set_minute();
    void set_sec();
    void print_res();
    
};
void Time::set_hour()
{
    cin>>hour;
    
}
void Time::set_minute()
{
    cin>>minute;
    
}
void Time::set_sec()
{
    cin>>sec;
    
}
void Time::print_res()
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main51()
{
    
    Time t1;
    t1.set_hour();
    t1.set_minute();
    t1.set_sec();
    t1.print_res();
    return 0;
    
}
