//
//  main.cpp
//  成绩排序
//
//  Created by 马元 on 佛历2560-11-28.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
#define A 100
class Student{
public:
    string name;
    int ID;
    string *coruseName=new string[A];
    int *score=new int[A];
    int sum;
};
int sort(int *p1,int n){
    int j,k,t,i;
    for(j=0;j<n-1;j++)
    {
        k=j;
        for(i=j+1;i<n;i++)
            if(p1[i]>p1[k])
                k=i;
        if(k!=j)
        {
            t=p1[j];
            p1[j]=p1[k];
            p1[k]=t;
        }
    }
    cout<<"输出的排序为";
     for(i=0;i<=j;i++)
     cout<<p1[i]<<" ";
     cout<<endl;
    return *p1;
}
int main() {
    int n;//the num of student
    int m;//the num of coruse
    cout<<"学生人数";
    cin>>n;
    cout<<"学科数目";
    cin>>m;
    Student *p=new Student[A];
    cout<<"输入学生的名字";
    for(int i=0;i<n;i++){
        cin>>p[i].name;
    }
    cout<<"输入学科的名字";
    Student s;
        for(int j=0;j<m;j++)
    {
        cin>>s.coruseName[j];
    }
    cout<<"输入各个学科的成绩"<<endl;
    for(int h=0;h<n;h++)
    {
    for(int l=0;l<m;l++)
    {
        cout<<"输入"<<p[h].name<<"的"<<s.coruseName[l]<<"成绩为";
        cin>>p[h].score[l];
    }
    }
    for(int i1=0;i1<n;i1++)
    {
        p[i1].sum=0;
        for(int i2=0;i2<m;i2++)
        {
            p[i1].sum=p[i1].sum+p[i1].score[i2];
        }
    }
    int *a=new int[A];
    for(int i=0;i<n;i++)
    {
        a[i]=p[i].sum;
    }
    sort(a,n);
    //sort(p->sum,n);
    cout<<"各科成绩   ";
    for(int i=0;i<m;i++)
    {
        cout<<s.coruseName[i]<<' ';
    }
    cout<<"   sum";
    cout<<endl;
    for(int i1=0;i1<n;i1++)
    {
        for(int i2=0;i2<n;i2++)
        {
          if(a[i1]==p[i2].sum)
          {
              cout<<"      "<<p[i2].name<<" ";
                  for(int i4=0;i4<m;i4++)
                  {
                      cout<<p[i2].score[i4]<<" ";
                  }
              cout<<p[i2].sum;
              cout<<endl;
              p[i2].sum=0;
          }
        }
        cout<<endl;
    }
    return 0;
}
