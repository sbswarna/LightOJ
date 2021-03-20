#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int tc,z;
    double a,b,c,d,p,q,r,s,ar,m,n,qd,tot;
    cin>>tc;
    for(z=0;z<tc;z++)
    {
        cin>>a>>b>>c>>d;
        if(a!=c)
        {
            p=b;
            q=d;
            if(a>c)
            {
                r=a-c;
                m=c;
            }
            else
            {
                r=c-a;
                m=a;
            }
        }
        else
        {
            p=a;
            q=c;
            if(b>d)
            {
                r=b-d;
                m=d;
            }
            else
            {
                r=d-b;
                m=b;
            }

        }
        s=(p+q+r)/2;
        ar=s*(s-p)*(s-q)*(s-r);
        ar=sqrt(ar);
        n=(2*ar)/r;
        qd=m*n;
        tot=qd+ar;
        cout<<"Case "<<z+1<<": ";
        printf("%.7lf\n",tot);
    }
return 0;
}
