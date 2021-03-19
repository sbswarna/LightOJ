#include<bits/stdc++.h>
using namespace std;
int tst,p,q,l,r,c,visited[25][25],hx,hy;
char s[25][25];
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
int start(int i,int j)
{
    queue<int>q;
    memset(visited,-1,sizeof(visited));
    visited[i][j]=0;
    q.push(i);
    q.push(j);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int y=q.front();
        q.pop();
        for(int i1=0; i1<4; i1++)
        {
            if(x+dx[i1]<r&&x+dx[i1]>=0&&y+dy[i1]<c&&y+dy[i1]>=0)
            {
                if(s[x+dx[i1]][y+dy[i1]]!='#'&&s[x+dx[i1]][y+dy[i1]]!='m')
                {
                    if(visited[x+dx[i1]][y+dy[i1]]==-1)
                    {
                        q.push(x+dx[i1]);
                        q.push(y+dy[i1]);
                        visited[x+dx[i1]][y+dy[i1]]=visited[x][y]+1;
                    }
                }
            }
        }
    }
    return visited[hx][hy];
}
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>r>>c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='h')
                {
                    hx=i;
                    hy=j;
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(s[i][j]=='a')
                {
                    p=start(i,j);
                }
                else if(s[i][j]=='b')
                {
                    q=start(i,j);
                }
                else if(s[i][j]=='c')
                {
                    l=start(i,j);
                }
            }
        }
        cout<<"Case "<<k<<": ";
        cout<<max(l,max(p,q))<<endl;
        k++;
    }
    return 0;
}
