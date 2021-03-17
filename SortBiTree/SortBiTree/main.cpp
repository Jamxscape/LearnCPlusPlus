#include <iostream>
using namespace std;
typedef int ElemType;
struct Node
{
    ElemType data;
    Node *lchild,*rchild;
};
class BiSorTree
{
private:
    Node *root; //指向根节点的指针
    int length;
public:
    BiSorTree(){root=NULL;length=0;}
    Node* getRoot(){return root;}
    int getLength(){return length;}
    void InsertChild(ElemType e);
    void add(Node *&root,Node *q);
    void InOrderTranverse(Node *root);
    void search_min(Node *root);
    void search_max(Node *root);
    Node* search(ElemType e);
    Node* sh(Node *&root,ElemType e);
};
void BiSorTree::search_min(Node *root)
{
    if(root->lchild!=NULL)
    {
        search_min(root->lchild);
    }
    else
        cout<<root->data<<endl;
}
void BiSorTree::search_max(Node *root)
{
    if(root->rchild!=NULL)
    {
        search_max(root->rchild);
    }
    else
        cout<<root->data<<endl;
}
void BiSorTree::InsertChild(ElemType e)
{
    Node *p=new Node;
    p->lchild=p->rchild=NULL;
    p->data=e;
    add(root,p);
}
void BiSorTree::add(Node *&root,Node *q)
{
    if(root!=NULL)
    {
        if((q->data)>(root->data)) add(root->rchild,q);
        else if((q->data)<(root->data)) add(root->lchild,q);
    }
    else
    {root=q;
        length++;
    }
    
}
Node* BiSorTree::search(ElemType e)
{
    return sh(root,e);
}
Node* BiSorTree::sh(Node *&root,ElemType e)
{
    if(root!=NULL)
    {
        if(e>(root->data)) sh(root->rchild,e);
        else if(e<(root->data)) sh(root->lchild,e);
        else if(e==(root->data)) return root;
    }
    return NULL;
}
void BiSorTree::InOrderTranverse(Node *root)
{
    if(root!=NULL)
    {
        InOrderTranverse(root->lchild);
        cout<<root->data<<" ";
        InOrderTranverse(root->rchild);
    }
}
int main()
{
    int n;
    BiSorTree b;
    cout<<"请输入一组数据(输入-1结束)：";
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        b.InsertChild(n);
    }
    cout<<"中序遍历：";
    b.InOrderTranverse(b.getRoot());
    cout<<endl;
    cout<<"1.查找最大值"<<endl;
    cout<<"2.查找最小值"<<endl;
    cout<<"3.查找给定值"<<endl;
    cout<<"请选择：";
    cin>>n;
    switch(n)
    {
        case 1:
        {
            b.search_max(b.getRoot());
        }break;
        case 2:
        {
            b.search_min(b.getRoot());
        }break;
        case 3:
        {
            cout<<"请输入要查找的数";
            cin>>n;
            if(b.search(n)!=NULL) cout<<"查找成功！"<<endl;
            else cout<<"查找失败！"<<endl;
        }break;
    }
    return 0;
}
