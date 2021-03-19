#include<bits/stdc++.h>
using namespace std;
int board[15][15],r,c,mn,tst,dex,dey,visited[15][15];
char ch;
int dx[]= {1,1,2,2,-1,-1,-2,-2};
int dy[]= {2,-2,1,-1,2,-2,1,-1};
int moves(int i,int j,int m)
{
    queue<int>q;
    int sx=i;
    int sy=j;
    q.push(sx);
    q.push(sy);
    visited[sx][sy]=0;
    while(!q.empty())
    {
        sx=q.front();
        q.pop();
        sy=q.front();
        q.pop();
        for(int i1=0; i1<8; i1++)
        {
            int x=sx;
            int y=sy;
            int k=1;
            while(1)
            {
                if(x+dx[i1]>=0&&x+dx[i1]<r&&y+dy[i1]>=0&&y+dy[i1]<c&&k<=m)
                {
                    x=x+dx[i1];
                    y=y+dy[i1];
                    k++;
                }
                else
                    break;

            }
            if(visited[x][y]==0)
            {
                q.push(x);
                q.push(y);
                visited[x][y]=visited[sx][sy]+1;
            }
        }
    }
    return visited[dex][dey];
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>r>>c;
        mn=9999;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>ch;
                if(ch=='.')
                {
                    board[i][j]=0;
                }
                else
                {
                    board[i][j]=ch-'0';
                    if(board[i][j]<mn)
                    {
                        mn=board[i][j];
                        dex=i;
                        dey=j;
                    }
                }
            }
        }
        board[dex][dey]=0;
        int ans=0;
        for(int i=0; i<r; i++)
        {
            memset(visited[i],-1,sizeof(visited[i]));
            for(int j=0; j<c; j++)
            {
                if(board[i][j]>0)
                {
                    ans+=moves(i,j,board[i][j]);
                    for(int s=0; s<r; s++)
                    {
                        for(int t=0; t<c; t++)
                            cout<<visited[s][t]<<" ";
                        cout<<endl;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
