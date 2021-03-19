#include<bits/stdc++.h>
using namespace std;
int tst,n,u,v,c,k,in[30005];
vector<pair<int,int> >graph[30005];
int main()
{
    cin>>tst;
    k=1;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            graph[i].clear();
        }
        for(int i=1;i<=n-1;i++)
        {
            cin>>u>>v>>c;
            graph[u].push_back(make_pair(v,c));
            graph[v].push_back(make_pair(u,c));
            in[u]++;
            in[v]++;
        }
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            int visited[30005];
            memset(visited,-1,sizeof(visited));
            queue<int>q;
            int s=i;
            q.push(s);
            visited[s]=0;
            while(!q.empty())
            {
                s=q.front();
                q.pop();
                for(int j=0;j<graph[s].size();j++)
                {
                    if(in[graph[s][j].first]>0)
                    {
                        in[graph[s][j].first]--;
                        visited[graph[s][j].first]=visited[s]+graph[s][j].second;
                        mx=max(visited[graph[s][j].first],mx);
                        q.push(graph[s][j].first);
                    }
                }
            }
        }
        cout<<"Case "<<k<<": "<<mx<<endl;
        k++;
    }
    return 0;
}
