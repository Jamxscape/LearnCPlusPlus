//
//  5.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-2.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
int main5()
{
    string a;
    char b[10000];
    while((cin>>a)&&a!="END")
    {
        for(int i=0;i<a.size();i++){
        if(a[i]=='A'||a[i]=='W'||a[i]=='F'){b[i]='I';}
        else if(a[i]=='C'){b[i]='L';}
        else if(a[i]=='M')b[i]='o';
        else if(a[i]=='S')b[i]='v';
        else if(a[i]=='D'||a[i]=='P'||a[i]=='G'||a[i]=='B'){b[i]='e';}
        else if(a[i]=='L')b[i]='Y';
        else if(a[i]=='X')b[i]='u';
        else b[i]=a[i];//必须有其他的可能，艹
        }
        for(int j=0;j<a.size();j++)
        cout<<b[j];
        cout<<endl;
    }
    
    return 0;
}
