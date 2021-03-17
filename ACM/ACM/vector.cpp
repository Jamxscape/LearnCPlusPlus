//
//  vector.cpp
//  ACM
//
//  Created by 马元 on 2017/5/19.
//  Copyright © 2017年 MaYuan. All rights reserved.
//测试vector各项函数

#include <iostream>
#include <vector>
using namespace std;
int main()
{int j;
    cin>>j;
    vector <int> s(j);
    
    for(int i=0;i<5;i++)
        cin>>s[i];
    for(int i=0;i<5;i++)
        cout<<s[i];
    return 0;
}
