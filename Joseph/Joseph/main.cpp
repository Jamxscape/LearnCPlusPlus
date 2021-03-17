//
//  main.cpp
//  Joseph
//
//  Created by 马元 on 佛历2560-10-26.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
#include "stdio.h"
using namespace std;
typedef struct LNode{
    int data;
    //struct point *prior;
    struct LNode *next;
}LNode,*PNode,*LinkList;//PNode为指针变量，LinkList为头结点
void CreateList(LinkList &L, int n)
{
    LNode *r,*s;
    L = new LNode;
    L->next = NULL;
    r = L;
    for (int i = 0; i < n; i++)
    {
        s = new LNode;
        cin >> s->data;
        s->next = L->next;
        r->next = s;
        r = s;
    }
}//创建链式
void printList(LinkList L)
{
    LNode *t;
    t=L->next;
    while (1)
    {
        cout << t->data << " ";
        t = t->next;
        if (t->next == L->next)
        {
            cout << t->data << " ";
            break;
        }
    }
    cout << endl;
}
int search(LinkList L,int n,int m)//n is participate ,m is that code,h is position
{
    int j;
    PNode p=L,q;
    while(n>1)
    {
        for(j=1;j<m-1;j++)
        { p=p->next;}
        q=p->next->next;
        p->next->next=q->next;
        cout<<"出局的人编号为:"<<q->data<<endl;
        free(q);
        p=p->next;
        n--;
    }
    cout<<"获胜的人为："<<p->data<<endl;
    return 1;
}
int main() {
    int i;//计数器
    int n;//参与的人数
    int m;//报数密码
    cout<<"请输入参与人数：";
    cin>>n;
    cout<<"请输入出局序数：";
    //n=n-1;
    cin>>m;
    cout<<"输入编号：";
   
    LinkList h;
    CreateList(h,n);
    cout<<"则您输入的编号为:";
    printList(h);
    if(m>1)
    {
    search(h,n,m);
    }
    else{
        for(i=1;i<n;i++)
        {
            cout<<"出局的人编号为:"<<i<<endl;
        }
        cout<<"获胜的人为:"<<n<<endl;
    }
    return 0;
}
