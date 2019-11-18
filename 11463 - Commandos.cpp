#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,test=1;
    cin>>t;
    while(t--) {
        int n,e,u,v,i,j,k;
        cin>>n>>e;
        int graph[101][101]={};
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                if(i != j)
                    graph[i][j] = 0xffff;
        while(e--) {
            cin>>u>>v;
            graph[u][v] = 1;
            graph[v][u] = 1;
        }
        int s,t;
        cin>>s>>t;
        for(k = 0; k < n; k++)
            for(i = 0; i < n; i++)
                for(j = 0; j < n; j++)
                    graph[i][j] = min(graph[i][j],graph[i][k]+graph[k][j]);
        int ans = 0;
        for(i = 0; i < n; i++)
            ans = max(ans, graph[s][i]+graph[i][t]);
        cout<<"Case "<<test<<": "<<ans<<endl;
        test++;
    }
    return 0;
}
