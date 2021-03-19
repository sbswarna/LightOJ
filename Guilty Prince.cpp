#include<bits/stdc++.h>
using namespace std;
int r,c,cnt,tst,k;
char s[100][100];
int prince(int i,int j)
{
    if(s[i][j]=='#'||i<0||i>r-1||j<0||j>c-1)
    {
        return 0;
    }
    else
    {
        cnt++;
        s[i][j]='#';
        prince(i,j+1);
        prince(i,j-1);
        prince(i+1,j);
        prince(i-1,j);
        return cnt;
    }
}
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cnt=0;
        cin>>c>>r;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>s[i][j];
            }
        }
        int ans;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(s[i][j]=='@')
                    ans=prince(i,j);
            }
        }
        cout<<"Case "<<k<<": ";
        cout<<ans<<endl;
        k++;
    }
    return 0;
}
