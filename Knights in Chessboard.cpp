#include<bits/stdc++.h>
using namespace std;
int tst,n,m;
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>n>>m;
        cout<<"Case "<<k++<<": ";
        if(n==1||m==1)
            cout<<max(n,m)<<endl;
        else if(n==2||m==2)
        {
            int p=max(m,n);
            int q=p/4;
            if(p%4==0)
            {
                cout<<q*4<<endl;
            }
            else if(p%4==1)
            {
                cout<<(q*4)+2<<endl;
            }
            else if(q%4==2)
            {
                cout<<(q*4)+4<<endl;
            }
            else
            {
                cout<<(q+1)*4<<endl;
            }
        }
        else
        {
            cout<<((n*m)+1)/2<<endl;
        }
    }
    return 0;
}
