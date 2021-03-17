//
//  8.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-3.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;
int main8(){
   long long int a[32];
   long long int p[100];
    string b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        int temp=0;
        for(int j=0;j<b.size();j++){
            if(b[j]>='0'&&b[j]<='9'){a[temp]=b[j]-48;temp++;}
        }
       long long int add=0;int t=temp;
        for(int i1=0;i1<temp;i1++)
        {   add=add+a[i1]*pow(10,t);t--;}
        p[i]=add;
    }
    for(int u=0;u<n;u++){
        cout<<p[u]*513<<endl;
    }
    return 0;
}
