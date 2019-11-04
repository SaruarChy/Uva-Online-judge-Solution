#include<bits/stdc++.h>

#define     Okay_bye            return 0
using namespace std;
vector<int>graph[50001];
int visit[50001];
int t,n,m,k,u;
int f;
int dfs(int u)
{
    int i,v;
    visit[u]=1;
    for(i=0; i<graph[u].size(); i++)
    {
        v=graph[u][i];
        if(visit[v]==0)
        {
            dfs(v);
            f++;
        }
        visit[u]=2;
    }
    return f;
}
int main()
{
    int t;
    int x,y,i,src;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(graph,0,sizeof(graph));
        memset(visit,0,sizeof(visit));
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        int u,v,max=0;
        for(u=1; u<=n; u++)
        {
            f=0;
            if(visit[u]==0)
            {
                int d=dfs(u);
                if(d>max)
                    max=d;
            }
        }
        cout<<max+1<<endl;

    }

    Okay_bye;
}
