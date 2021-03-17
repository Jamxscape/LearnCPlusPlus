//
//  main.cpp
//  图
//
//  Created by 马元 on 佛历2560-11-30.
//  Copyright © 佛历2560年 MaYuan. All rights reserved.
//

#include "stdio.h"
#include <iostream>
using namespace std;
#define Mvex_num  20
//typedef int VertexType;
typedef struct{
    int arcs[Mvex_num][Mvex_num];
    int vexnum;
    int arcnum;
}MGraph;

//////Creat////
void Creat (MGraph *G){
    int i,j;
    cout<<"输入图的顶点数：";
    cin>>G->vexnum;
    cout<<"输入图的弧数：";
    cin>>G->arcnum;
    for(i=1;i<=G->vexnum;i++){
        for(j=1;j<=G->vexnum;j++){
            cout<<"行为"<<i<<",列为"<<j<<"的值为"; 
            cin>>G->arcs[i][j];
        }
    }
}
void Degree(MGraph *G){
    int ind, outd, du,i,j;
    for (i=1;i<=G->vexnum;i++){
        ind=0;
        outd=0;
        for(j=1;j<=G->vexnum;j++){
            ind+=G->arcs[j][i];
            outd+=G->arcs[i][j];
        }
        du=ind+outd;
        cout<<"顶点:"<<i<<"入度:" <<ind<<"出度:"<<outd<<"度:"<<du<<endl;
    }
}
int main(){
    MGraph G;
    //    void Creat(MGraph *G);
    //    void Degree(MGraph *G);
    Creat(&G);
    Degree(&G);
    return 0;
}
