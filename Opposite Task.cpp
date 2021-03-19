#include<bits/stdc++.h>
using namespace std;
int tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n==0)
            cout<<0<<" "<<0<<endl;
        else
        {
            if(n<=11)
                cout<<1<<" "<<n-1<<endl;
            else
                cout<<10<<" "<<n-10<<endl;
        }
    }
    return 0;
}
