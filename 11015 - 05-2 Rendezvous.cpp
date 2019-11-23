#include<iostream>
#include<algorithm>
#include<map>
#define     INT_MAX     1000000009
using namespace std;

int main()
{
    int test=1;
    int n,m;
    int res,ans,mini=INT_MAX;
    int i,j,k,u,v,w;
    int graph[30][30];
    string s;
    while(1)
    {
        map<int,string>mps;
        cin>>n>>m;
        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            cin>>s;
            mps[i]=s;
        }
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                if(i==j)
                    graph[i][j]=0;
                else
                    graph[i][j]=INT_MAX;
            }
        while(m--)
        {
            cin>>u>>v>>w;
            graph[u][v]=graph[v][u]=w;
        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
        for(i=1; i<=n; i++)
        {
            res=0;
            for(j=1; j<=n; j++)
            {
                res+=graph[i][j];
            }
            if(mini>res)
            {
                mini=res;
                ans=i;
            }
        }
        cout<<"Case #"<<test<<" : "<<mps[ans]<<endl;
        test++;
    }
    return 0;
}
