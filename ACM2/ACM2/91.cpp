//
//  91.cpp
//  ACM2
//
//  Created by 马元 on 佛历2561-2-11.
//  Copyright © 佛历2561年 MaYuan. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    for(int i=0;i<16;i++)
        for(int j=0;j<23;j++){
            if(j==0)cout<<"<button class="<<'"'<<"button" <<'"'<<"bindtap="<<'"'<<"start" <<'"'<<"type="<<'"'<<"mini"<<'"'<<">";
            cout<<"{{num["<<i<<"]["<<j<<"]}}";
            //if(j==22)cout<<"</button>"<<endl;
        }
    return 0;
    
}

