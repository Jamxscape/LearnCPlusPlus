//
//  6.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-2.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main6()
{
    string str;
    int a[26];
    for(int j=0;j<26;j++){
        a[j]=0;
    }
    while(cin>>str){
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='a')a[0]++;
            else if(str[i]=='b')a[1]++;
            else if(str[i]=='c')a[2]++;
            else if(str[i]=='d')a[3]++;
            else if(str[i]=='e')a[4]++;
            else if(str[i]=='f')a[5]++;
            else if(str[i]=='g')a[6]++;
            else if(str[i]=='h')a[7]++;
            else if(str[i]=='i')a[8]++;
            else if(str[i]=='j')a[9]++;
            else if(str[i]=='k')a[10]++;
            else if(str[i]=='l')a[11]++;
            else if(str[i]=='m')a[12]++;
            else if(str[i]=='n')a[13]++;
            else if(str[i]=='o')a[14]++;
            else if(str[i]=='p')a[15]++;
            else if(str[i]=='q')a[16]++;
            else if(str[i]=='r')a[17]++;
            else if(str[i]=='s')a[18]++;
            else if(str[i]=='t')a[19]++;
            else if(str[i]=='u')a[20]++;
            else if(str[i]=='v')a[21]++;
            else if(str[i]=='w')a[22]++;
            else if(str[i]=='x')a[23]++;
            else if(str[i]=='y')a[24]++;
            else if(str[i]=='z')a[25]++;
        }
        if(str[str.size()-1]=='#')break;
    }
    char c=97;
    for(int k=0;k<26;k++)
    {
        cout<<c<<' '<<a[k]<<endl;
        c++;
    }
    return 0;
}
