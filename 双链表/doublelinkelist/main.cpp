//
//  main.cpp
//  doublelinkelist
//
//  Created by 马元 on 佛历2560-10-26.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
using namespace std;
typedef struct DuLNode{
    int data;
    struct DuLNode *prior;
    struct DuLNode *next;
}Node,*DuLinkList;
void printfInfo(DuLinkList L)
{
    DuLinkList p;
    p = L->next;
    while (p!=NULL)
    {
        cout<<p->data<<' ';
        p=p->next;
    }
    cout<<endl;
}
int ListInsert_DuL(DuLinkList &L,int i,int e)
{
    DuLinkList p=L,s;
   
    if(!(s=(DuLinkList)malloc(sizeof(DuLNode))))return 0;
    s->data=e;
    s->prior=p->prior;
    p->prior->next=s;
    s->next=p;
    p->prior=s;
    printfInfo(L);
    return 0;
}//插入链表
int ListDelete_DuL(DuLinkList L,int i,int &e){
    DuLinkList p=L;
       e=p->data;
       p->prior->next=p->next;
       p->next->prior=p->prior;
       free(p);
       return 0;
}//删除链表
DuLinkList createDouLinkList(int n)
{
    Node *L,*p,*r;
   
    L = (Node *)malloc(sizeof(Node));
    L->next = NULL;
    r = L;
    r->next = NULL;
    for(int i=0;i<n;i++)
    {
        p = (Node *)malloc(sizeof(Node));
        cin>>L->data;
        p->data=L->data;
        p->next = r->next;
        r->next = p;
        r = p;
        
        
    }
    r->next = NULL;
    return L;
}


int main() {
    DuLinkList M;
    int n;
    cout<<"输入双向链表的数字个数";
    cin>>n;
    cout<<"输入双向链表数字";
    M=createDouLinkList(n);
    printfInfo(M);
    int i;int e;
    cout<<"输入插入数字的位置";
    cin>>i;
    cout<<"输入插入数字的数值";
    cin>>e;
    ListInsert_DuL(M,i,e);
    cout<<"输入删除元素坐标";
    cin>>i;
    ListDelete_DuL(M,i,e);
    return 0;
}
