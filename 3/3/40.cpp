//
//  40.cpp
//  3
//
//  Created by 马元 on 2016/12/27.
//  Copyright © 2016年 MaYuan. All rights reserved.
//

#include <iostream>
using namespace std;
int main40()
{
    int m,max,k;
    cin>>k;
    max=k;
    for(int i=0;i<9;i++)
    {
        cin>>m;
        if(m>max)max=m;
    }
    cout<<"最大值为"<<max<<endl;
    return 0;
}

