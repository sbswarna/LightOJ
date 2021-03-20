
#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d,e,f,n,tst,dp[10005];
long long mod=10000007;
long long fib(long long x)
{
    if( x == 0 ) return a;
    if( x == 1 ) return b;
    if( x == 2 ) return c;
    if( x == 3 ) return d;
    if( x == 4 ) return e;
    if( x == 5 ) return f;
    if(dp[x]==-1)
        return dp[x]=( fib(x-1)%mod + fib(x-2)%mod + fib(x-3)%mod + fib(x-4)%mod + fib(x-5)%mod + fib(x-6)%mod )%mod;
    else
        return dp[x]%mod;
}
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<k++<<": "<<fib(n)%mod<<endl;
    }
    return 0;
}
