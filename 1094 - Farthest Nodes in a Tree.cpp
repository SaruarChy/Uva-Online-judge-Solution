#include<stdio.h>
#include<iostream>
#include<queue>
#define     inf     1000000000
using namespace std;

vector<int>graph[30000];
int n,visited[30000];
int dis[30000];
vector<int>cost[30000];
void bfs(int s)
{
    for(int i=0; i<n; i++)
    {
        visited[i]=0;
        dis[i]=inf;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dis[v]=dis[u]+cost[u][i];
                q.push(v);
            }
        }
    }
}
int main()
{
    int t,test=1,i,u,v,w;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n-1; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            graph[u].push_back(v);
            graph[v].push_back(u);

            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        bfs(0);
        int maxdis=0,start;
        for(i=0; i<n; i++)
            if(dis[i]>maxdis)
                start=i,maxdis=dis[i];
        bfs(start);
        maxdis=0;
        for(i=0; i<n; i++)
            if(dis[i]>maxdis)
            {
                maxdis=dis[i];
                maxdis=dis[i];
            }
        printf("Case %d: %d\n",test,maxdis);
        for(int i=0;i<n;i++)
        {
            graph[i].clear(); cost[i].clear();
        }
        test++;
    }
    return 0;
}
