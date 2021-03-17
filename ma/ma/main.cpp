#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define  LIST_INIT_SIZE   5
#define  LISTINCREMENT   1
typedef  struct{
    int  *elem;//存储基址
    int  length;//long
    int  listsize;//分配存储空间
}SqList;
int ListInsert_Sq(SqList &L, int i, int e);
int ListDelete_Sq(SqList &L, int i, int &e);
int main( )
{ SqList M;
    int i,j,g,*p;
    M.elem=(int *)malloc(LIST_INIT_SIZE*sizeof(int));
    if (!M.elem) exit(0);
    p=M.elem;M.length=0;
    
    cout<<"请输入五个整数:"<<endl;
    for(i=0;i<LIST_INIT_SIZE;i++)
    {cin>>*(p+i);
        M.length++;
    }
    cout<<"线性表的数字为："<<endl;
    for(i=0;i<M.length;i++)
        cout<<*(p+i)<<endl;
    M.listsize=LIST_INIT_SIZE;
    cout<<"请输入插入的位置和插入的数字"<<endl;
    cin>>j>>g;
    ListInsert_Sq(M,j,g);
    p=M.elem;
    cout<<"插入完的数字组合为：";
    for(i=0;i<M.length;i++)
        cout<<*(p+i)<<' ';
    cout<<endl;
    int q;//删除第n个元素
    cout<<"输入需要删除的元素"<<endl;
    cin>>q;
    ListDelete_Sq(M,q,g);
    for(i=0;i<M.length;i++)
        cout<<*(p+i)<<' ';
    cout<<endl;
    return 0;
}


int ListInsert_Sq(SqList &L, int i, int e)
{   int *newbase,*p,*q;
    if (i<1 || i>L.length+1) return 0;
    if (L.length>=L.listsize) {
        newbase=(int *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(int));
        if (!newbase) exit(0);
        L.elem=newbase;
        L.listsize+=LISTINCREMENT;
    }
    q=&(L.elem[i-1]);
    for(p=&(L.elem[L.length-1]);p>=q;--p)
        *(p+1)=*p;
    *q=e;
    ++L.length;
    return 1;
}//插入新元素
int ListDelete_Sq(SqList &L, int i, int &e)
{   int *p,*q;
    if (i<1 || i>L.length+1) return 0;
    p= &(L.elem[i-1]);
    e=*p;
    q=L.elem+L.length-1;
    for(++p;p<=q;++p)
        *(p-1) =*p;
    --L.length;
    return 1;
}//删除元素
void MergeList_Sq(SqList La,SqList Lb,SqList &Lc){
    int *pa=La.elem;
    int *pb=Lb.elem;
    Lc.listsize=Lc.length=La.length+Lb.length;
    int *pc=Lc.elem=(int)malloc(Lc.listsize*sizeof(int));
    

}
