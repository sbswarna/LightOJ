#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int tst;
double ox,oy,ax,ay,bx,by;
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
         double a=sqrt((abs(ox-ax)*abs(ox-ax))+(abs(oy-ay)*abs(oy-ay)));
         double b=sqrt((abs(ox-bx)*abs(ox-bx))+(abs(oy-by)*abs(oy-by)));
         double c=sqrt((abs(ax-bx)*abs(ax-bx))+(abs(ay-by)*abs(ay-by)));
         double th=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        cout<<"Case "<<k<<": ";
        cout<<setprecision(12)<<th*a<<endl;
        k++;
    }
    return 0;
}
