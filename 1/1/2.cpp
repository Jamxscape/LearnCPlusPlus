#include<iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int n=0;
    int p=0,t;
    while(getline(cin,a)){
        for (int i=0;i<a.length();i++)
        {
            if(i==0){
                for(int j=i;j<a.length();j++){
                    if(a[j]==' '){break;}
                    n++;
                }
                p=n;
                i=i+n;
            }
            n=0;
            while(a[i]==' '){
                
                for(int j=i+1;j<a.length();j++){
                    if(a[j]==' '){break;}
                    n++;
                }
                t=n;
                if(t>p){p=t;}
                i=i+n;
            }
            n=0;
        }
        cout<<p<<endl;
    for(int i=0;i<a.length();i++)
    {
        if(i==0&&a[i+p]==' ')
        {
            for(int j=0;j<=p;j++)
                cout<<a[j];
            i=i+p;
            cout<<' ';
        }
        else if((a[i]==' '&&a[i+p+1]==' ')||(a[i]==' '&&i+p+1==a.length())){
            for(int j=i+1;j<=i+p;j++)
                cout<<a[j];
            cout<<' ';
            i=i+p;
        }
    }
    cout<<endl;p=0;n=0;
    }
    return 0;
}
