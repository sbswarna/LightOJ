#include<bits/stdc++.h>
using namespace std;
int n,tst,visited[20003],exists[20003],u,v;
vector<int>graph[100003];
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>n;
        memset(visited,-1,sizeof(visited));
        memset(exists,-1,sizeof(exists));
        for(int i=0; i<=20000; i++)
            graph[i].clear();
        int mx=-1,mn=999999;
        queue<int>q;
        for(int i=1; i<=n; i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            mx=max(mx,max(u,v));
            mn=min(mn,min(u,v));
            exists[u]=1;
            exists[v]=1;
        }
        int sum=0;
        for(int t=mn; t<=mx; t++)
        {
            int cnt1=0,cnt2=0;
            if(exists[t]==1)
            {
                if(visited[t]==-1)
                {
                    q.push(t);
                    visited[t]=1;
                    cnt1++;
                    while(!q.empty())
                    {
                        int s=q.front();
                        q.pop();
                        for(int i=0; i<graph[s].size(); i++)
                        {
                            if(visited[s]==1)
                            {
                                if(visited[graph[s][i]]==-1)
                                {
                                    visited[graph[s][i]]=2;
                                    q.push(graph[s][i]);
                                    cnt2++;
                                }
                            }
                            else if(visited[s]==2)
                            {
                                if(visited[graph[s][i]]==-1)
                                {
                                    visited[graph[s][i]]=1;
                                    q.push(graph[s][i]);
                                    cnt1++;
                                }
                            }

                        }
                    }
                }
                sum+=max(cnt1,cnt2);
            }
        }
        cout<<"Case "<<k<<": ";
        cout<<sum<<endl;
        k++;
    }
    return 0;
}
