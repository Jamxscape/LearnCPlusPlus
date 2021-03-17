//
//  main.cpp
//  LoveProduct
//
//  Created by 马元 on 佛历2561-7-26.
//  Copyright © 佛历2561年 MaYuan. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>
#include <term.h>
#include <math.h>
using namespace std;
void draw(string str){
    int temp=0;
    int minus=0;
    for(double y=1.3 ; y>=-1.1; y -=0.06){
        for(double x=-1.1 ; x<=1.1 ; x+=0.025){
            if(x*x + pow(5.0*y/4.0 - sqrt(fabs(x)),2) -1 <= 0.0){
                cout << str.at(temp);
                temp = (temp+1)%str.length();
            }
            else{
                for(int i=temp;i>=0;i--){
                    if( ( (int)str.at(i) ) <0 )
                        minus++;
                    else break;
                }
                if((minus==0)||(minus%2==1)){
                    cout << " ";
                    minus = 0;
                }
                else{
                    cout << str.at(temp);
                    temp = (temp+1)%str.length();
                    minus = 0;
                }
            }
        }
        cout << endl;
    }
}
void draw1(string str){
    int temp=0;
    int minus=0;
    for(double y=1.17 ; y>=-0.99; y -=0.06){
        for(double x=-0.99 ; x<=0.99 ; x+=0.025){
            if(x*x + pow(5.0*y/4.0 - sqrt(fabs(x)),2) -1 <= 0.0){
                cout << str.at(temp);
                temp = (temp+1)%str.length();
            }
            else{
                for(int i=temp;i>=0;i--){
                    if( ( (int)str.at(i) ) <0 )
                        minus++;
                    else break;
                }
                if((minus==0)||(minus%2==1)){
                    cout << " ";
                    minus = 0;
                }
                else{
                    cout << str.at(temp);
                    temp = (temp+1)%str.length();
                    minus = 0;
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    string name;
    cout<<"输入要花心形底字的名字";
    cin>>name;
    for(int i=0;i<10;i++){
    draw(name);
        sleep(1);
        system("clear");
    draw1(name);
        sleep(1);
        system("clear");
    }
    return 0;
}
