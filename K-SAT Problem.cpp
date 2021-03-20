#include<bits/stdc++.h>
using namespace std;
int tst,n,m,k,a[35][35],p,q[35];
char c[35][35];
int main()
{
    cin>>tst;
    int t=1;
    while(tst--)
    {
        cin>>n>>m>>k;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                cin>>c[i][j]>>a[i][j];
            }
        }
        cin>>p;
        int x;
        memset(q,0,sizeof(q));
        for(int i=0; i<p; i++)
        {
            cin>>x;
            q[x]=1;
        }
        int f=0,flag=0;
        for(int j=0; j<n; j++)
        {
            f=0;
            for(int it=0; it<k; it++)
            {
                for(int i=1; i<=m; i++)
                {
                    if(q[i]==0&&i==a[j][it]&&c[j][it]=='-'||q[i]==1&&i==a[j][it]&&c[j][it]=='+')
                    {
                        f++;
                    }
                }
            }
            if(f==0)
            {
                flag=1;
                break;
            }
        }
        cout<<"Case "<<t<<": ";
        if(flag==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        t++;
    }
    return 0;
}
