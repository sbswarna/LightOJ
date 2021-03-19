#include<bits/stdc++.h>
using namespace std;
#define MAX 1000010
int lps[MAX];
string s,p;
int tst;
void build_lps(string pattern, int m)
{
    lps[0] = 0;
    lps[1] = 0;

    for(int i = 2; i <= m; i++)
    {
        int j = lps[i - 1];
        while(true)
        {
            if(pattern[j] == pattern[i - 1])
            {
                lps[i] = j + 1;
                break;
            }
            if(j == 0)
            {
                lps[i] = 0;
                break;
            }
            j = lps[j];
        }
    }
}
int kmp(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    build_lps(pattern, m);
    int cnt=0;
    int i = 0;
    int j = 0;

    while(true)
    {
        if(j == n)
        {
            return cnt;
        }
        if(text[j] == pattern[i])
        {
            i++;
            j++;
            if(i == m)
            {
                cnt++;;
            }
        }
        else
        {
            if (i == 0)
            {
                j++;
            }
            else
            {
                i = lps[i];
            }
        }
    }
    return cnt;
}
int main()
{
    cin>>tst;
    int x=1;
    while(tst--)
    {
        cin>>s>>p;
        int ans=kmp(s,p);
        cout<<"Case "<<x<<": "<<ans<<endl;
        x++;
    }
    return 0;
}
