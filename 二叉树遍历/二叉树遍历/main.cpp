//
//  main.cpp
//  二叉树遍历
//
//  Created by 马元 on 佛历2560-11-24.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;//左右孩子指针
};
BiTNode *BiTree ;//构造二叉树
typedef struct LNode{
    char data;
    struct LNode *next;
}LNode, *LinkList;
int num=0;
int createList(LinkList &L)
{
    //按顺位序输入n个元素的值，建立带头节点的单链表
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;//建立头节点
    LinkList q = L;
    while(1)
    {
        LinkList s = (LinkList)malloc(sizeof(LNode));
        if (!s)
        {
            return 0;
        }
        cin>>s->data;
        
        if(s->data=='#')break;
        num++;
        q->next = s;
        s->next = NULL;
        q = s;
        //按逆序位输入
        //s->next = L->next;//连接第一个节点
        //L->next = s;
    }
    return 0;
}//创建链式
int getElem(LinkList L, int i, char &e)
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
}
void InitBiTree(BiTNode *T){
    T=NULL;
}
int BiTreeEmpty(BiTNode *T){
    if(T==NULL)return true;
    else return false;
}
int h=0;
BiTNode *CreateBiTree(LinkList L,BiTNode *T){
    
    char e;
    if(h>num){return (NULL);}
    else h++;
     getElem(L,h,e);
    if(e=='@'){T=NULL;}
    else {
        //if(!(T=(BiTNode *)malloc(sizeof(BiTNode)))){cout<<"OVERFLOW";return (T);}
        T=new BiTNode;
        T->data=e;
       T->lchild=CreateBiTree(L,T);//构造左子树
          T->rchild=CreateBiTree(L,T);//构造右子树
    }
    return (T);
}//createBiTree
void PreOrderTravers(BiTNode *T){
    BiTNode *tmp=T;
    if(tmp!=NULL)
      {
      cout<<tmp->data<<" ";
          PreOrderTravers(tmp->lchild);
          PreOrderTravers(tmp->rchild);
      }
}//PreOrdertraverse
void InOrderTraverse(BiTNode *T)
{
    if (T)
    {
        InOrderTraverse (T->lchild) ;
        cout<<T->data<<" ";
        InOrderTraverse (T -> rchild) ;
    }
}

void PostOrderTraverse(BiTNode *T)
{
    if (T)
    {
        PostOrderTraverse (T->lchild) ;
        PostOrderTraverse (T->rchild) ;
        cout<<T->data<<" ";
    }
}
int main(){
    cout<<"输入二叉树的值";
    LinkList L;
    createList(L);
    BiTree=CreateBiTree(L,BiTree);
    cout<<"先序遍历结果为";
    PreOrderTravers(BiTree);
    cout<<endl;
    cout<<"中序遍历结果为";
    InOrderTraverse(BiTree);
    cout<<endl;
    cout<<"后序遍历结果为";
    PostOrderTraverse(BiTree);
    cout<<endl;
    return 0;
}



/*int InOrderTraverrse(BiTree T,int(*Visit)(int e)){
 BiTree p;
 InitStack(S);p=T;
 while(p||!StackEmpty(S)){
 if(p){Push(S,p);p=p->lchild;}//根指针进栈，遍历左子树
 else {
 Pop(S,p);
 if(!Visit(p->data))return 0;
 p=p->rchild;
 }//else
 }//While
 return 0;
 }//InOrderTraverrse*/


