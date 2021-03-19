#include<bits/stdc++.h>
using namespace std;
vector<int>v[200];
int in,tst;
void primeFactors()
{
    for(int i=1; i<=100; i++)
    {
        int n=i;
        while (n%2 == 0)
        {
            v[i].push_back(2);
            n = n/2;
        }

        for (int j = 3; j <= sqrt(n); j = j+2)
        {
            while (n%j == 0)
            {
                v[i].push_back(j);
                n = n/j;
            }
        }
        if (n > 2)
            v[i].push_back(n);
    }
}
int main()
{
    primeFactors();
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>in;
        int freq[200]={0};
        for(int i=2;i<=in;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                freq[v[i][j]]++;
            }
        }
        cout<<"Case "<<k++<<": "<<in<<" = ";
        int x;
        for(int i=0;i<=in;i++)
        {
            if(freq[i]>0)
            {
                cout<<i<<" ("<<freq[i]<<")";
                x=i;
                break;
            }
        }
        for(int i=x+1;i<=in;i++)
        {
            if(freq[i]>0)
            {
                cout<<" * "<<i<<" ("<<freq[i]<<")";
            }
        }
        cout<<endl;
    }
    return 0;
}
