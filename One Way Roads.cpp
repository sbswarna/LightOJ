#include<bits/stdc++.h>
using namespace std;
int tst,n,cost[110][110],u,v,c;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        vector<int>adj[110];
        for(int i=1; i<=n; i++)
        {
            cin>>u>>v>>c;
            adj[u].push_back(v);
            adj[v].push_back(u);
            cost[v][u]=c;
        }
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            queue<int>q;
            int visited[110];
            memset(visited,-1,sizeof(visited));
            int source=i;
            q.push(source);
            visited[source]=0;
            while(!q.empty())
            {
                source=q.front();
                q.pop();
                for(int j=0; j<adj[source].size(); j++)
                {
                    if(visited[adj[source][j]]==-1)
                    {
                        visited[adj[source][j]]=visited[source]+1;
                        q.push(adj[source][j]);
                    }
                }
            }
            for(int j=n; j>=1; j--)
            {
                int d=j;
                while(d!=i)
                {
                    for(int k=0; k<adj[d].size(); k++)
                    {
                        if(visited[adj[d][k]]+1==visited[d])
                        {
                            if(i==2)
                                cout<<cost[adj[d][k]][d]<<endl;
                            if(cost[adj[d][k]][d]!=0)
                            {
                                sum+=cost[adj[d][k]][d];
                                cost[adj[d][k]][d]=0;
                            }
                            d=adj[d][k];
                            break;
                        }
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
