//
//  9.cpp
//  ACM2
//
//  Created by 马元 on 佛历2560-12-31.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main9(){
int left,right;
int mid;
    int key;
    int Array[20];
    for(int i=0;i<20;i++)
        Array[i]=i+1;
left=Array[0];
right=Array[19];
    cin>>key;
    cout<<(2+7)/2<<endl;
while(left<=right)

{
    mid=(left+right)/2;
    if(key==Array[mid])  {cout<<Array[mid]<<endl;return mid;}
    else if(key<Array[mid]) {cout<<Array[mid]<<endl;right=mid-1;}
    else if(key>Array[mid]){cout<<Array[mid]<<endl; left=mid+1;}
            
}
    
return -1;
}
