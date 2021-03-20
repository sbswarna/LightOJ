#include<bits/stdc++.h>
using namespace std;
int tst,a[30009],n,k;
stack<int>stk;
int main()
{
    scanf("%d",&tst);
    k=1;
    while(tst--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int mx=0,i=0;
        while(i<n)
        {
            if(stk.empty()||a[stk.top()]<=a[i])
            {
                stk.push(i);
                i++;
            }
            else
            {
                int x=stk.top(),area;
                stk.pop();
                if(stk.empty())
                {
                    area=a[x]*(i);
                }
                else
                {
                    area=a[x]*(i-1-stk.top());
                }
                mx=max(mx,area);
            }
        }
        while(!stk.empty())
        {
            int x=stk.top(),area;
            stk.pop();
            if(stk.empty())
            {
                area=a[x]*(i);
            }
            else
            {
                area=a[x]*(i-1-stk.top());
            }
            mx=max(mx,area);
        }
        printf("Case %d: %d\n",k++,mx);
    }
    return 0;
}
