
#include <iostream>
using namespace std;
const long long M = 1000000007;
long long res;

long long Q(int n, long long t)
{
    long long temp=(t*res)%M;
    long long sum;
    if(n < 0) return t;
    if(t==temp)
        return (Q(n - 1, t) + Q(n - 1, t)) % M;
    else
        return (Q(n - 1, t) + Q(n - 1, (t * res) % M)) % M;
}
int main10()
{
    int n;
    while(cin >> n)
    {
        for(int i = 0; i < n; ++i)
        {
            cin >> res;
            res %= M;
        }
        cout << Q(n - 1, 1) << endl;
        }
        return 0;
}
