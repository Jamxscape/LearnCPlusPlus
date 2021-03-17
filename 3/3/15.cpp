//
//  15.cpp
//  3
//
//  Created by 马元 on 2016/12/21.
//  Copyright © 2016年 MaYuan. All rights reserved.
//Given a two-dimensional array of positive and negative integers, a sub-rectangle is any contiguous sub-array of size 1 x 1 or greater located within the whole array. The sum of a rectangle is the sum of all the elements in that rectangle. In this problem the sub-rectangle with the largest sum is referred to as the maximal sub-rectangle.As an example, the maximal sub-rectangle of the array:(给定一个二维数组的正整数和负整数，一个子矩形是任何连续的子数组的大小1×1或更大的范围内的整个数组。矩形的和是矩形中所有元素的和.。在这个问题中，带最大和的子矩形称为最大子矩形.。)
/*
0 -2 -7 0
9  2 -6 2
-4 1 -4 1
-1 8  0-2

is in the lower left corner:

9 2
-4 1
-1 8

and has a sum of 15.*/

#include <iostream>
using namespace std;
int main15()
{
    int a[4][4]={0,-2,-7,0,9,2,-6,2,-4,1,-4,1,-1,8,0,-2},t;
    /*for(int j=0;j<4;j++)
      for(int k=0;k<4;k++)
        cin>>a[k][j];*/
   
    int i,b,sum,g,r,m,n;
    sum=a[0][0]+a[0][1]+a[1][0]+a[2][0]+a[1][1]+a[2][1];
     for(i=0;i<2;i++)
    {
       for(g=0;g<2;g++)
        { b=a[i][g]+a[i+1][g]+a[i+2][g]+a[i][g+1]+a[i+1][g+1]+a[i+2][g+1];
          if(b>sum)sum=b,t=i,r=g,m=t,n=r;
        }
    }
    cout<<sum<<endl;
    for(t;t<=m+2;t++)
    {    for(r;r<n+2;r++)
    { cout<<a[t][r]<<" ";
        
    }r=n;
    cout<<endl;
    }
    return 0;
}
