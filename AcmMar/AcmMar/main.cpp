#include <iostream>
#include <cmath>
using namespace std;
bool prime(unsigned long long num )
{
    if(num ==2|| num==3 )
        return 1 ;
    if(num %6!= 1&&num %6!= 5)
        return 0 ;
    unsigned long long tmp =sqrt(num);
    for(int i= 5;i <= tmp; i+=6 )
        if(num %i== 0||num %(i+ 2)==0 )
            return 0 ;
    return 1 ;
}
int main1()
{
    unsigned long long n,i,j;
    int num;
    cin>>num;
    for(int i1=0;i1<num;i1++){
        cin>>n;
        j=n;
        for (i=2;i<=j/2;i++)
        {
            if (prime(i) && prime(j-i))
            {
                cout<<i<<' '<<j-i<<endl;
                break;
            }
        }
    }
    return 0;
}
