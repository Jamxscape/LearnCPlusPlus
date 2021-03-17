//
//  18.cpp
//  3
//
//  Created by 马元 on 2016/12/23.
//  Copyright © 2016年 MaYuan. All rights reserved.
//

#include <iostream>
using namespace std;

int main18(void)
{
    string str_test1;
    string str_test2 = "sin";
    
    int value1, value2, value3;
    
    value1 = sizeof(str_test1);
    value2 = sizeof(str_test2);
    value3 = sizeof(string);
    
    cout<<"str_test1占 "<<value1<<" 个字节"<<endl;
    cout<<"str_test2占 "<<value2<<" 个字节"<<endl;
    cout<<"string占 "<<value3<<" 个字节"<<endl;
    
    system("pause");
    return 0;
}
