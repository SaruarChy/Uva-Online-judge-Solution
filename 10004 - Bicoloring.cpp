#include<cstdio>
#include<queue>
#include<iostream>
#include<vector>
using namespace std;

vector <int>graph[200];
int bfs(int node)
{
    int color[200]={0};
    int visit[200]={0};
    queue <int> q;
    q.push(node);
    color[node]=1;
    while (!q.empty())
    {
        int f=q.front();
        q.pop();
        int d=color[f]==1?2:1;
        int l=graph[f].size();
        for (int i=0;i<l;i++)
        {
            node=graph[f][i];
            if (color[f]==color[node]) return 0;
            if (!visit[node])
            {
                q.push(node);
                color[node]=d;
                visit[node]=1;
            }
        }
    }
    return 1;
}

int main()
{
    int n,e,u,v;
    while (1)
    {
        cin>>n;
        if (n==0)
            break;
        cin>>e;
        for (int i=0;i<e;i++)
        {
           cin>>u>>v;
           graph[u].push_back(v);
           graph[v].push_back(u);
        }
        if (bfs(0))
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
        for (int i=0;i<n;i++)
            graph[i].clear();
    }
    return 0;
}
