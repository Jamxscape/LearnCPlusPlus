//
//  44.cpp
//  3
//
//  Created by 马元 on 2017/1/2.
//  Copyright © 2017年 MaYuan. All rights reserved.
//杭州人称那些傻乎乎粘嗒嗒的人为62（音：laoer）。
/*杭州交通管理局经常会扩充一些的士车牌照，新近出来一个好消息，以后上牌照，不再含有不吉利的数字了，这样一来，就可以消除个别的士司机和乘客的心理障碍，更安全地服务大众。
不吉利的数字为所有含有4或62的号码。例如：
62315 73418 88914
都属于不吉利号码。但是，61152虽然含有6和2，但不是62连号，所以不属于不吉利数字之列。
你的任务是，对于每次给出的一个牌照区间号，推断出交管局今次又要实际上给多少辆新的士车上牌照了。*/

#include <iostream>
using namespace std;
int main44()
{
    int a[5];
  
    
        for(int j=0;j<=9;j++)
        {  for(int k=0;k<=9;k++)
                for(int l=0;l<=9;l++)
                    for(int m=0;m<=9;m++)
                        for(int n=0;n<=9;n++)
                        {
                            a[0]=j;
                            a[1]=k;
                            a[2]=l;
                            a[3]=m;
                            a[4]=n;
                            for(int i=0;i<5;i++)
                            {
                                if(a[i]==4)
                            {
                                for(int y=0;y<5;y++)
                                    cout<<a[y];
                                cout<<endl;
                            }
                            if(a[i]==6&&a[i+1]==2)
                            {
                                for(int y=0;y<5;y++)
                                    cout<<a[y];
                                cout<<endl;
                            }
                                
                            }
                        }
        
        
   
    
    
        }
    
    
    return 0;
}
