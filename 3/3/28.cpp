//
//  28.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//

#include<iostream>
#include <ctime>
using namespace std;
int main28()
{
    int a,b,sum,c;
    srand(time(0));
    for(int i=0;i<=10000;i++)
    {//cout<<"当你想结束的时候，输入end，程序就会自动结束哟"<<endl;
        a=1+rand()%1000;
        b=1+rand()%1000;
        sum=a*b;
        cout<<"小朋友，算一下"<<a<<"*"<<b<<"=";
        cin>>c;
        if(c==sum)cout<<"小朋友真聪明，恭喜你算对了,算下一道吧"<<endl;
        else
        {
            cout<<"小朋友，你算错了"<<endl;
                cout<<"再算一遍吧！"<<endl;
                cin>>c;
                while(c!=sum)
                {
                    cout<<"你又算错了,再试试"<<endl;
                    cin>>c;
                }
        }
    }
    return 0;
}
