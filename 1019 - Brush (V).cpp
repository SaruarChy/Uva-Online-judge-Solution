#include<iostream>
#include<algorithm>
#define     inf     1000000
using namespace std;

int main()
{
    int t,test=1,n,m,i,j,k;
    int graph[205][205];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                if(i==j)
                    graph[i][j]=0;
                else
                    graph[i][j]=inf;
            }
        for(i=0; i<m; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            if(graph[u][v]==inf)
                graph[u][v]=graph[v][u]=w;
            else
            {
                graph[u][v]=min(graph[u][v],w);
                graph[v][u]=min(graph[v][u],w);
            }
        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
        if(graph[1][n]==inf)
            cout<<"Case "<<test<<": Impossible"<<endl;
        else
            cout<<"Case "<<test<<": "<<graph[1][n]<<endl;
        test++;
    }
    return 0;
}
