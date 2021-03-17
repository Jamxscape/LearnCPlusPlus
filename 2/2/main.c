#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=a;
    if(max<b) max=b;
    if(max<c) max=c;//找到最大值
    int min=a;
    if(min>b) min=b;
    if(min>c) min=c;//找到最小值
    int max1=a;//次大
    if(max1<max&&max1>min) max1=a;
    else max1=b;
    if(max1<max&&max1>min) max1=b;
    else max1=c;
    printf("%d\n",max);
    printf("%d\n",max1);
    printf("%d\n",min);
    return 0;
}
