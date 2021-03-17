//
//  main.cpp
//  ACM
//
//  Created by 马元 on 2017/5/19.
//  Copyright © 2017年 MaYuan. All rights reserved.
//
/*Problem Description
本题的任务很简单，就是计算一些整数的和。
Input
输入数据的第一行首先是一个整数N，表示有N组测试用例，然后是N行数据。
每行的数据首先一个整数M，然后是要求和的M个整数。
Output
对于每组测试用例，请输出它们的和，每组数据的输出占一行。
Sample Input
2
4 1 2 3 4
5 1 2 3 4 5
Sample Output
10
15
 */
#include <iostream>
using namespace std;
int main1()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=0,a,b;
        cin>>b;
        for(int j=0;j<b;j++)
        {   cin>>a;
            sum=sum+a;
        }
        cout<<sum<<endl;
    }
    return 0;
}
