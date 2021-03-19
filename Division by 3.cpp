#include<bits/stdc++.h>
using namespace std;
int a,b,tst;
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>a>>b;
        int a1=a,b1=b;
        cout<<"Case "<<k++<<": ";
        int x=(a/3);
        if(a%3!=0)
            x++;
        a=a-x;
        int y=(b/3);
        if(b%3!=0)
            y++;
        b=b-y;
        if(a1%3==2||a1%3==0)
            cout<<b-a+1<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}
