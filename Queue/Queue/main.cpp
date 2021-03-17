//
//  main.cpp
//  Queue
//
//  Created by 马元 on 佛历2560-11-23.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef struct QNode{
    int data;
    struct QNode *next;
}QNode,*QueuePtr;
typedef struct{
    QueuePtr front;//队头指针
    QueuePtr rear;//队尾指针
} LinkQueue;
int InitQueue(LinkQueue &Q){
    Q.front = Q.rear=(QueuePtr)malloc(sizeof(QNode));
    if(!Q.front){cout<<"OVERFLOW";return 0;}
    Q.front->next=0;
    return 0;
}//构造一空队列
int DestroyQueue(LinkQueue &Q){
    while(Q.front)
    {
        Q.rear=Q.front->next;
        free(Q.front);
        Q.front=Q.rear;
    }
    return 0;
}//销毁一个队列
int EnQueue(LinkQueue &Q,int e)
{
    QueuePtr p;
    p=(QueuePtr)malloc(sizeof(QNode));
    if(!p){cout<<"OVERFLOW";return 0;}
    p->data=e;
    p->next=NULL;
    Q.rear->next=p;
    Q.rear=p;
    return 0;
}//插入元素
int DeQueue(LinkQueue &Q,int &e){
    QueuePtr p;
    if(Q.front==Q.rear){cout<<"OVERFLOW";return 0;}
    p=Q.front->next;
    e=p->data;
    Q.front->next=p->next;
    if(Q.rear==p)Q.rear=Q.front;
    free(p);
    return 0;

}//删除元素
int viewQueue(LinkQueue *que)
{
    if(que->rear == que->front)
    {  cout<<"空队列"<<endl;return 0;}
    int u=0;
    QueuePtr p =que->front->next;
    cout<<"请"<<p->data<<"号客户前到窗口办理"<<endl;
    cout<<"前边客户号分别是";
    while(p)
    {
        cout<<p->data<<' ';
        p=p->next;
        u++;
    }
     cout<<"前边共有"<<u<<"个人在等待或办理"<<endl;
    return 0;
}//显示元素

int main() {
    LinkQueue Q;
    InitQueue(Q);
    for(int i=1;i<=6;i++)
    {
        EnQueue(Q,i);
    }
    cout<<"当前您的客户号为7"<<endl;
    viewQueue(&Q);
    for(int i=1;i<=6;i++)
    {
        DeQueue(Q, i);
        viewQueue(&Q);
    }
    DestroyQueue(Q);
    viewQueue(&Q);
    return 0;
}
