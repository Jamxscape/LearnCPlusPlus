//
//  main.cpp
//  栈
//
//  Created by 马元 on 佛历2560-11-16.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//
#include<stdio.h>
#include<string.h>
#include <iostream>
#define size 5//初始分配空间
#define add 1//分配空间增量
using namespace std;

typedef struct{
    int *base;
    int *top;
    int stacksize;
    int *goods=new int[5];
}SqStack;
int InitStack(SqStack &s){
    s.base=(int *)malloc(size*sizeof(int));
    if(!s.base)cout<<"OVERFLOW";
    s.top=s.base;
    s.stacksize=size;
    return 0;
}
int GetTop(SqStack s,int &e){
    if(s.top==s.base)return 0;//空栈
    else {e=*(s.top-1);return e;}
}//
/*bool isEmpty(SqStack s){
    if(s.top == 0){
        printf("是空栈\n");//
        return true;
    }else{
        return false;
    }
}*/
//判断是否为空栈
bool isFull(SqStack s){
    if(s.top ==&s.stacksize){
        return true;
    }
    else{
        return false;
    }
}
//入栈
void push(SqStack &s, int e){
    
    if(!isFull(s)){
        //s.top=s.base+s.stacksize;
        s.top++;
        
        s.stacksize+=add;
        for(int i=s.stacksize;i>0;i--)
        {
            int t=s.goods[i-1];
            s.goods[i]=t;
        }
        s.goods[0]=e;
    }
  /*  else
        cout<<"此栈已满，入栈操作失败\n";*/
}
int Push(SqStack &s,int e){
    if(s.top-s.base>=s.stacksize){
        s.base=(int *)realloc(s.base, (s.stacksize+add)*sizeof(int));
        if(!s.base)cout<<"OVERFLOW";
        s.top=s.base+s.stacksize;
        s.stacksize+=add;
        
    }
    *s.top++ = e;
    cout<<*s.top<<endl;
    return 0;
}//进栈
int Pop(SqStack &s){
   
    if(s.top==s.base){cout<<"空栈";return 0;}
    else {
        for(int i=0;i<s.stacksize-1;i++)
        {
            int t=s.goods[i+1];
            s.goods[i]=t;
        }
         s.stacksize--;
        s.top=s.top++;
        }
   
    return 0;
}//弹栈
void printStack(SqStack s){
    for(int i=0;i<s.stacksize;i++)
    {
        cout<<s.goods[i]<<' ';
    }
    cout<<endl;
}
int enterData(SqStack *s){
    for(int i=size-1;i>=0;i--)
    {
        cout<<"输入商品生产日期";
        cin>>s->goods[i];
    }
    return 0;
}
int sort(int *p1,int n,SqStack s){
    n=s.stacksize;
    int j,k,t,i;
    for(j=0;j<n-1;j++)
    {
        k=j;
        for(i=j+1;i<n;i++)
            if(p1[i]<p1[k])
                k=i;
        if(k!=j)
        {
            t=p1[j];
            p1[j]=p1[k];
            p1[k]=t;
        }
    }
    /*cout<<"输出的排序为";
    for(i=0;i<=j;i++)
        cout<<p1[i]<<" ";
    cout<<endl;*/
    return *p1;
}
int main() {
    SqStack s;
    int e=0;
    enterData(&s);
    InitStack(s);
    GetTop(s,e);
    cout << "栈的大小:"<<s.stacksize << endl;
    cout << "依次出栈:" << endl;
    printStack(s);
   
    int q;//新入栈的元素个数
    cout<<"输入新入栈的商品个数";
    cin>>q;
    for(int i=0;i<q;i++){
    cout<<"输入最新的商品生产日期：";
    cin>>e;
    push(s,e);
    }
    cout<<"新的商品栈为：";
    printStack(s);
   
    sort(s.goods,s.stacksize,s);
    cout<<"出栈后并重新进栈";
    printStack(s);
    //弹栈
    cout<<"输入需要出栈的商品个数";
    cin>>q;
    for(int i=0;i<q;i++)
    {
    Pop(s);
    }
    cout<<"新的商品栈为：";
    printStack(s);
    
    
    
    
    
    
    
    return 0;
}
