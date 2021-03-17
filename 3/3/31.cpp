//
//  31.cpp
//  3
//
//  Created by 马元 on 2016/12/25.
//  Copyright © 2016年 MaYuan. All rights reserved.
//输入一个英文句子，将每个单词的第一个字母改成大写字母。Input输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
//创建存储str的副本的 stringstream 对象，其中str是 string 类型的对象
/*iostream标准库支持内存中的输入/输出，只要将流与存储在程序内存中的string对象捆绑起来即可。此时，可使用iostream输入和输出操作符读写这个string对象。标准库定义了三种类型的字符串流：
1.istringstream，由istream派生而来，提供读string的功能。
2.ostringstream，由ostream派生而来，提供写string的功能。
3.stringstream，由iostream派生而来，提供读写string的功能。*/
/*
 string类基本的输入函数有如下几个：
 
 1）istream& operator>>(istream&,string&);
 2）istream& getline(istream&,string&);
 3）istream& getline(istream&,string&,char);*/
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    
    for(int j=0;j<100;j++)
    {
        getline(cin,a);
    for (int i=0;i<a.length();i++)
    {
        if(i==0) putchar(a[i]-32);
        else if(a[i-1]==' ') putchar(a[i]-32);
        else
        cout<<a[i];
    }
    }
    cout<<endl;
    
    return 0;
}
