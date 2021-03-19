#include<bits/stdc++.h>
using namespace std;
int tst;
double r;
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>r;
        double pi=2*acos(0.0);
        double a=4*r*r;
        double ac=pi*r*r;
        double ans=a-ac;
        cout<<"Case "<<k++<<": ";
        printf("%.2lf\n",ans);
    }
    return 0;
}
