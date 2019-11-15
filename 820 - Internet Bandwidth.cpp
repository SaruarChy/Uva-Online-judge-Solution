#include<iostream>
#include<queue>
#include<cstring>
#include<climits>
#define Max 101
using namespace std;
int n,e;
bool bfs(int rg[Max][Max],int s,int t,int par[])
{
    bool visit[Max];
    memset(visit,0,sizeof(visit));
    queue<int>q;
    q.push(s);
    visit[s]=true;
    par[s]=-1;
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int b=0; b<n; b++)
        {
            if(visit[b]==false && rg[a][b]>0)
            {
                q.push(b);
                par[b]=a;
                visit[b]=true;
            }
        }
    }
    return (visit[t]==true);
}

int fordfulkerson(int g[Max][Max],int n,int s,int t)
{
    int u,v;
    int rg[Max][Max];
    for(u=0; u<n; u++)
        for(v=0; v<n; v++)
        {
            rg[u][v]=g[u][v];
        }
    int par[Max];
    int maxflow=0;
    while(bfs(rg,s,t,par))
    {
        int pathflow=INT_MAX;
        for(v=t; v!=s; v=par[v])
        {
            u=par[v];
            pathflow=min(pathflow,rg[u][v]);
        }
        for(v=t; v!=s; v=par[v])
        {
            u=par[v];
            rg[u][v]-=pathflow;
            rg[v][u]+=pathflow;
        }
        maxflow+=pathflow;
    }
    return maxflow;
}

int main()
{
    int test=1;
    int i,u,v,w,s,t;
    int g[Max][Max];
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        memset(g,0,sizeof(g));
        cin>>s>>t>>e;
        s--,t--;
        for(i=0; i<e; i++)
        {
            cin>>u>>v>>w;
            g[u-1][v-1]+=w;
            g[v-1][u-1]+=w;
        }
        cout<<"Network "<<test<<endl;
        cout<<"The bandwidth is "<<fordfulkerson(g,n,s,t)<<"."<<endl<<endl;
        test++;
    }
    return 0;
}
