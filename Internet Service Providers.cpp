#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,c,pr,t,tc,a,p,f,pr1,pr2;
    cin>>tc;
    for(a=0; a<tc; a++)
    {
        cin>>n>>c;
        t=0;
        f=0;
        p=0;

        while(n>0)
        {
            pr1=t*c;
            pr2=t*t*n;
            pr=pr1-pr2;
            if(pr<p)
                break;
            if(t!=0 && p==pr)
                break;
            p=pr;
            t++;
        }
        if(n==0)
            cout<<"Case "<<a+1<<": "<<t<<endl;
        else
            cout<<"Case "<<a+1<<": "<<t-1<<endl;
    }
    return 0;
}
