//
//  7.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-2.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//
#include <iostream>
#include <algorithm>
using namespace std;
int main7() {
    int n,a[1000];
    int m=0;
    while(cin>>n){
         m=n;
        for(int i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        while(m!=2)
        {
            int h=m;
            for(int j=1;j<m;j+=2)
            {
                cout<<a[j]<<' ';
                a[j]=51;h--;
            }
            sort(a,a+m);
            m=h;
        }
        cout<<endl;
        for(int k=0;k<2;k++)
            cout<<a[k]<<' ';
        cout<<endl;
    }
    return 0;
}
