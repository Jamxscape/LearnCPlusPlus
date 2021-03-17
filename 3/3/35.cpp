//
//  35.cpp
//  3
//
//  Created by 马元 on 2016/12/25.
//  Copyright © 2016年 MaYuan. All rights reserved.
//大家提到LTC都佩服的不行，不过，如果竞赛只有这一个题目，我敢保证你和他绝对在一个水平线上你的任务是：计算方程x^2+y^2+z^2= num的一个正整数解。Input输入数据包含多个测试实例，每个实例占一行，仅仅包含一个小于等于10000的正整数num。Output对于每组测试数据，请按照x,y,z递增的顺序输出它的一个最小正整数解，每个实例的输出占一行，题目保证所有测试数据都有解。

#include <iostream>
using namespace std;
int main35()
{
    int num,x,y,z;
    cin>>num;
    for(x=0;x<num;x++)
        for(y=0;y<num;y++)
            for(z=0;z<num;z++)
                if(x*x+y*y+z*z==num)cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<endl;
    return 0;
}
