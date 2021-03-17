//
//  4.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-2.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
/*
 青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分
 输入
 输入数据有多组，每组占一行，每行的第一个数是n(2＜n＜100)，表示评委的人数，然后是n个评委的打分。
 输出
 对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。
 样例输入
 3 99 98 97
 4 100 99 98 97
 样例输出
 98.00
 98.50
*/
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main4()
{
    int n;
    double a[100];
    while(cin>>n){
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        double sum=0;
        for(int j=1;j<n-1;j++)
        {
            sum=a[j]+sum;
        }
        double avg=sum/(n-2);
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<avg<<endl;
    }
    return 0;
}
