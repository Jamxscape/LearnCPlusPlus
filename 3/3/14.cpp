//
//  14.cpp
//  3
//
//  Created by 马元 on 2016/12/21.
//  Copyright © 2016年 MaYuan. All rights reserved.
//有一叠n张卡片,从上到下依次编号为1～n,从最上面的一张开始按如下的顺序进行操作：把最上面的第一张卡片拿掉,把下一张卡片放在这一叠卡片的最下面；再把最上面的第一张卡片拿掉,把下一张卡片放在这一叠卡片的最下面；依次重复这样做,直到手中剩下一张卡片.当n=500时,请按拿走卡片的顺序,列出每次拿掉的卡片数字.zhizhang......

#include <iostream>
using namespace std;
int main14()
{
    int i;
    for(i=1;i<=500;i+=2)
        cout<<i<<" ";
    return 0;
}
