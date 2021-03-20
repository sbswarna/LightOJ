#include<bits/stdc++.h>

using namespace std;
int main()
{
    int m,l,d,tc,c;
    cin>>tc;
    for(c=0;c<tc;c++)
    {
        cin>>m>>l;
        if(m>l)
            d=m-l;
        else
            d=l-m;
        d= (d*4)+11+(m*4)+8;
        cout<<"Case "<<c+1<<": "<<d<<endl;
    }
return 0;
}
