//
//  5.cpp
//  3
//
//  Created by 马元 on 2016/12/20.
//  Copyright © 2016年 MaYuan. All rights reserved.
//The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.

#include <iostream>
using namespace std;
int main5()
{
    int N1,total=0,N2;
    cin>>N1;
    cin>>N2;
    if(N1==0)total=total+0;
    if(N1>0)total=N1*5+N1*6;
    if(N2==0)total=total+0;
    if(N2>0)total=N2*5+N2*4;
    cout<<total<<endl;
    return 0;
}
