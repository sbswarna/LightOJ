#include<bits/stdc++.h>
using namespace std;
int tst,a[1005],u,v,n,m,k,td;
vector<int>graph[1005];
set<int>city[1005];
int main()
{
    cin>>tst;
    td=1;
    while(tst--)
    {
        cin>>k>>n>>m;
        for(int i=0;i<=n;i++)
        {
            graph[i].clear();
            city[i].clear();
        }
        for(int i=1;i<=k;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=m;i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
        }
        for(int i=1;i<=k;i++)
        {
            queue<int>q;
            int visited[1005];
            memset(visited,0,sizeof(visited));
            int s=a[i];
            q.push(s);
            visited[s]=1;
            city[s].insert(i);
            while(!q.empty())
            {
                s=q.front();
                q.pop();
                for(int j=0;j<graph[s].size();j++)
                {
                    if(visited[graph[s][j]]==0)
                    {
                        visited[graph[s][j]]=1;
                        q.push(graph[s][j]);
                        city[graph[s][j]].insert(i);
                    }
                }
            }
        }
        set<int>::iterator it;
        int cnt=0;
        cout<<"Case "<<td<<": ";
        for(int i=1;i<=n;i++)
        {
            /*for(it=city[i].begin();it!=city[i].end();it++)
                cout<<(*it)<<" ";
            cout<<endl;*/
            if(city[i].size()==k)
                cnt++;
        }
        cout<<cnt<<endl;
        td++;
    }
    return 0;
}
