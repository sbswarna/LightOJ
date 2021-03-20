#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long int ax,ay,bx,by,cx,cy,dx,dy,i,t,area;
double px,py;

int main()
{
    cin>>t;
    i=1;
    while(i<=t)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        px=(ax+cx);
        py=(ay+cy);
        dx=px-bx;
        dy=py-by;
        area=(ax*(by-cy))-(ay*(bx-cx))+((bx*cy)-(cx*by));
        if(area<0)
        {
            area=area*-1;
        }
        printf("Case %lld: %lld %lld %lld\n",i,dx,dy,area);
        i++;
    }
    return 0;
}
