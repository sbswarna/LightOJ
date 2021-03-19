#include<bits/stdc++.h>
using namespace std;
#define MAX 1000007
int lps[MAX];
string s,p,r;
int tst,res;
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
    int i = 0;
    int j = 0;
    while(true)
    {
        if(i == n)
        {
            return j;
        }
        if(text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j];
            }
        }
    }
}
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>s;
        for(int i=s.size()-1;i>=0;i--)
        {
            r.push_back(s[i]);
        }
        cout<<"Case "<<k<<": ";
        cout<<(2*s.size())-kmp(s,r)<<endl;
        r.clear();
        k++;
    }
    return 0;
}

