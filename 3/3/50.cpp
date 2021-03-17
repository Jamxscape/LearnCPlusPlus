//
//  50.cpp
//  3
//
//  Created by 马元 on 2017/3/21.
//  Copyright © 2017年 MaYuan. All rights reserved.
//


#include <iostream>
using namespace std;
class Array_max
{
public:
    void set_value();
    void max_value();
    void show_value();
private:
    int array[10];
    int max;

};
void Array_max::set_value()
{
    int i;
    for(i=0;i<10;i++)
        cin>>array[i];
}
void Array_max::max_value()
{
    int i;
    max=array[0];
    for(i=1;i<10;i++)
        if(array[i]>max)max=array[i];
    
}
void Array_max::show_value()
{
    cout<<"max="<<max;
}
int main51()
{
    Array_max arrmax;
    arrmax.set_value();
    arrmax.max_value();
    arrmax.show_value();
    return 0;

}
