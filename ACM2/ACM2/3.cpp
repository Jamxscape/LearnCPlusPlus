#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
struct acm
{
    string name;
    int AC,time;
};
bool comp(acm a,acm b)
{
    if(a.AC==b.AC)
    {
        if(a.time==b.time)
            return a.name<b.name;
        return a.time<b.time;
    }
    return a.AC>b.AC;
}
int main3()
{
    int n,m,i,t,a;
    acm c[10000];
    cin>>n>>m;
    string s,grade,d;
    for(t=0;cin>>s;t++)
    {
        c[t].name=s;
        c[t].AC=0;
        c[t].time=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a<=0)continue;
            c[t].AC++;
            c[t].time+=a;
            if(getchar()=='(')
            {
                cin>>a;
                c[t].time+=a*m;
                getchar();
            }
        }
    }
    sort(c,c+t,comp);
    for(i=0;i<t;i++)
    {
        cout<<left<<setw(10)<<c[i].name<<' ';
        cout<<right<<setw(2)<<c[i].AC<<' ';
        cout<<right<<setw(4)<<c[i].time<<endl;
    }
    return 0;
}
