//
//  25.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//一批数字排序，有点问题

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
        
        int *p;
        int n=0;
        p=new int[n];
        cout<<"用空格隔开，输入数字为";
        while(cin>>p[n])
        {   			  n++;
            p[n]=getchar();
            if(p[n]=='\n')break;
        }
    
    sort(p,p+n);
    for(int j=0;j<n;j++)
    cout<<p[j]<<" ";
    cout<<endl;
    cout<<n;
    cout<<endl;
    return 0;
}
