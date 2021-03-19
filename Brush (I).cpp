#include<bits/stdc++.h>
using namespace std;
int tst,n,a;
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cout<<endl;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a>0)
                sum+=a;
        }
        cout<<"Test "<<k++<<": "<<sum<<endl;
    }
    return 0;
}
