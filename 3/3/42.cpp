//
//  42.cpp
//  3
//
//  Created by 马元 on 2016/12/29.
//  Copyright © 2016年 MaYuan. All rights reserved.
//lily的好朋友xiaoou333最近很空，他想了一件没有什么意义的事情，就是统计一篇文章里不同单词的总数。下面你的任务是帮助xiaoou333解决这个问题。Input有多组数据，每组一行，每组就是一篇小文章。每篇小文章都是由小写字母和空格组成，没有标点符号，遇到#时表示输入结束。Output每组只输出一个整数，其单独成行，该整数代表一篇文章里不同单词的总数。

#include <iostream>
#include <string>
using namespace std;
int main42()
{
    string a;
    int num=1;
    for(int j=0;j<100;j++)
    {
        getline(cin,a);
    for(int i=0;i<a.length();i++)
    {  if(a[i]==' ')num++;
    } cout<<num<<endl;
        num++;
    }
       
    return 0;
}
