#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,u,v,w;
    int s,t,p,test=1;
    int i,j,k;
    while(1)
    {
        int graph[200][200];
        cin>>n>>e;
        if(n==0)
            break;

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                graph[i][j]=0;

        while(e--)
        {
            cin>>u>>v>>w;
            graph[u][v]=graph[v][u]=w;
        }

        //Floyd Warshall Algorithm
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    graph[i][j]=max(graph[i][j],min(graph[i][k],graph[k][j]));

        cin>>s>>t>>p;

        cout<<"Scenario #"<<test<<endl;
        cout<<"Minimum Number of Trips = "<<ceil((double)p/(double)(graph[s][t]-1))<<endl<<endl;
        test++;
    }
    return 0;
}
