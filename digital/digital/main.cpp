//
//  main.cpp
//  digital
//
//  Created by 马元 on 佛历2560-10-19.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//  单链表插入删除等
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;//Struct a xianxingbiaolianshi
int ListInsert_L(LinkList &L,int i,int e);
int ListDelete_L(LinkList &L,int i,int &e);
int createList(LinkList &L, int n);
int getElem(LinkList L, int i, int &e);
void MergeList_L(LinkList &La,LinkList &Lb,LinkList &Lc);
int main() {
    LinkList M;
    int e;
    int f;//f is the sum of Linklist.
    cout<<"请输入链式的个数为";
    cin>>f;
    cout<<"请输入其分别得数值";
    createList(M,f);
    cout<<"您输入的链式数值为";
    for (int i = 1; i <=f; i++)
    {
        getElem(M,i,e);
        cout<<e<<' ';
    }
    cout<<endl;//创建链式后输出
    int m,n;//m is the position of insert,n is the value.
    cout<<"请输入插入的位置";
    cin>>m;
    cout<<"输入插入的数值";
    cin>>n;
    ListInsert_L(M,m,n);
    cout<<"插入完后的链式为";
    for (int i = 1; i <=f+1; i++)
    {
        getElem(M, i, e);
        cout<<e<<' ';
    }f+=1;
    cout<<endl;
    int k;//k id delete num's position
    cout<<"请输入删除的元素位置";
    cin>>k;
    ListDelete_L(M,k,e);
    cout<<"删除完后的链式为";
    for (int i = 1; i <=f-1; i++)
    {
        getElem(M, i, e);
        cout<<e<<" ";
    }f-=1;
    cout<<endl;
    //链表相加
    LinkList l1,l2,l3;
    int l1size,l2size;
    cout<<"输入链式1的长度";
    cin>>l1size;
    cout<<"输入链式1的数值";
    createList(l1, l1size);
    cout<<"您输入的链式1数值为";
    for (int i = 1; i <=l1size; i++)
    {
        getElem(l1,i,e);
        cout<<e<<' ';
    }
    cout<<endl;
    cout<<"输入链式2的长度";
    cin>>l2size;
    cout<<"输入链式2的数值";
    createList(l2, l2size);
    cout<<"您输入的链式2数值为";
    for (int i = 1; i <=l2size; i++)
    {
        getElem(l2,i,e);
        cout<<e<<' ';
    }
    cout<<endl;
    MergeList_L(l1, l2, l3);
    cout<<"两个链式的加和为";
    for (int i=1;i<=(l1size+l2size);i++)
    {
        getElem(l3,i,e);
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}
int ListInsert_L(LinkList &L,int i,int e)
{
   LinkList p=L, s;
    int j=0;
    while (p&&j<i-1)
    {
        p=p->next;
        ++j;
    }
    if(!p||j>i-1)return 0;
    s=(LinkList)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return 0;
}//插入
int ListDelete_L(LinkList &L,int i,int &e)
{
    int j=0;
    LinkList p=L,q;
    while(p->next&&j<i-1)
    {
        p=p->next;
        ++j;
    }
    if(!(p->next)||j>i-1)return 0;
    q=p->next;
    p->next=q->next;
    e=q->data;
    free(q);
    return 0;
}//删除
int createList(LinkList &L, int n)
{
    //按顺位序输入n个元素的值，建立带头节点的单链表
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;//建立头节点
    LinkList q = L;
    for (int i = 1; i <= n; i++)
    {
        LinkList s = (LinkList)malloc(sizeof(LNode));
        if (!s)
        {
            return 0;
        }
        cin>>s->data;
        q->next = s;
        s->next = NULL;
        q = s;
        //按逆序位输入
        //s->next = L->next;//连接第一个节点
        //L->next = s;
    }
    return 0;
}//创建链式

int getElem(LinkList L, int i, int &e)
{
    //L是带头节点的单链表的头指针
    LinkList p = L->next;
    int j = 1;
    while (p&&j < i)
    {
        p = p->next;//寻找第i个节点
        j++;
    }
    if (!p || j > i)
    {
        return 0;
    }
    e = p->data;
    return 0;
}//在带头节点的链表中获取第i个节点值，并用元素e返回

void MergeList_L(LinkList &La,LinkList &Lb,LinkList &Lc)
{
    LinkList pa=La->next;
    LinkList pb=Lb->next;
    LinkList pc= Lc = La;//
      while(pa&&pb)
      {
          if(pa->data<=pb->data){
              pc->next=pa;
              pc=pa;
              pa =pa->next;
          }
          else {
              pc->next=pb;
              pc=pb;
              pb=pb->next;
          }
      }
    pc->next=pa?pa:pb;
    free(Lb);
}// 链式相加

