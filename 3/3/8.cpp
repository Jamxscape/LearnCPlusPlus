//
//  8.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//编写一个帮助小学生学习加法的程序，随机产生2个数，让学生输入答案。

#include<iostream>
#include <ctime>
using namespace std;
int main8()
{
    int a,b,sum,c;
    char d;
    srand(time(0));
    for(int i=0;i<=10000;i++)
    {//cout<<"当你想结束的时候，输入end，程序就会自动结束哟"<<endl;
        a=0+rand()%100;
    b=0+rand()%100;
    sum=a+b;
    cout<<"小朋友，算一下"<<a<<"+"<<b<<"=";
    cin>>c;
    if(c==sum)cout<<"小朋友真聪明，恭喜你算对了,算下一道吧"<<endl;
    else
    {
    cout<<"小朋友，你算错了，你还要在算一遍吗？如果还算输入Y，否则输入N"<<endl;
        cin>>d;
        if(d=='N')cout<<"小朋友再见。"<<endl;
        else if(d=='Y')
        {
            cout<<"再算一遍吧！";
            cin>>c;
            while(c!=sum)
            {
                cout<<"你又算错了,再试试"<<endl;
                cin>>c;
            }
        }
    }
    }
    return 0;
}
