//
//  main.cpp
//  test3
//
//  Created by 马元 on 佛历2560-12-4.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n=10,m,length,b=2,k=0,l,length2;
    while(cin>>m){
        length2=m;
    n=m+1;
    int a[n];
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
        length=m;
    for(int j=2;length>=2;j=j+2){
        cout<<"length="<<length<<" "<<"j="<<j<<endl;//
        cout<<a[j]<<" ";cout<<endl;
 
        k++;
        l=j;
        for(int jj=0;jj<k;jj++){
            a[l]=a[l+1];
            l--;
            
        }

        for(int g=1;g<13;g++)//
            cout<<a[g]<<" ";
        cout<<endl;
        length--;
        cout<<"进入分支"<<"length="<<length<<endl;
        if(length==m/b&&length2%2==0){cout<<"进入偶数分支！"<<endl;
            j=0;b+=2;length2=length;}
        if(length==m/b+1&&length2%2==1){cout<<"进入奇数分支！"<<endl;
            j=0;b+=2;length2=length;}
    }
        
    }
    return 0;
}
