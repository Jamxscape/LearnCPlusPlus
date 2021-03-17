//
//  26.cpp
//  3
//
//  Created by 马元 on 2016/12/24.
//  Copyright © 2016年 MaYuan. All rights reserved.
//这个题目的A和B不是简单的整数，而是两个时间，A和B 都是由3个整数组成，分别表示时分秒，比如，假设A为34 45 56，就表示A所表示的时间是34小时 45分钟 56秒。输入数据有多行组成，首先是一个整数N，表示测试实例的N个数，然后是N行数据，每行有6个整数AH,AM,AS,BH,BM,BS，分别表示时间A和B所对应的时分秒。题目保证所有的数据合法。对于每个测试实例，输出A+B，每个输出结果也是由时分秒3部分组成，同时也要满足时间的规则（即：分和秒的取值范围在0~59），每个输出占一行，并且所有的部分都可以用32位整数表示。


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main27()
{
    int *p;
    int N,A[4],B[4],i,n=0;
    cin>>N;
    p=new int[3*N];
    for(i=1;i<=N;i++)
    {

        for(int j=1;j<=3;j++)
            cin>>A[j];
        for(int r=1;r<=3;r++)
            cin>>B[r];
        p[i+n]=A[1]+B[1];
        if(p[i+n]>=60)
        {
            p[i+n]=p[i+n]-60;
            n++;
            p[i+n]=A[2]+B[2]+1;
            if(p[i+n]>=60)
            {
                p[i+n]=p[i+n]-60;
                n++;
                p[i+n]=A[3]+B[3]+1;
            }
            else
                n++;
                p[i+n]=A[3]+B[3];
        }
        else
        {n++;
                p[i+n]=A[2]+B[2];
                if(p[i+n]>=60)
                {
                    p[i+n]=p[i+n]-60;
                    n++;
                    p[i+n]=A[3]+B[3]+1;
                }
                else n++;
                    p[i+n]=A[3]+B[3];
        }
        
    }
    
            for(i=1;i<=3*N;i++)
            {
                cout<<p[i]<<" ";
                if(i%3==0)cout<<endl;
            }
            cout<<endl;
        return 0;
    
}
