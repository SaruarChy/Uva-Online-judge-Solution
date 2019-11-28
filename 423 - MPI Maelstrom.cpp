#include<iostream>
#include<cstdio>
#include<algorithm>
#define     inf     1000000000
using namespace std;
int main()
{
    int n;
    int i,j,k,graph[105][105],x;
    while(scanf("%d",&n)==1){
        int a;
        for(i=0; i<n; i++)
            graph[i][i]=inf;

        for(i=1; i<n; i++)
            for(j=0; j<i; j++)
            {
                if(scanf("%d",&x)==1)
                    graph[i][j]=graph[j][i]=x;
                else
                    graph[i][j]=graph[j][i]=inf,    scanf("%*c");
            }
        for(k=0; k<n; k++)
            for(i=0; i<n; i++)
                for(j=0; j<n; j++)
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
        int ans=0;
        for(i=1; i<n; i++)
            ans=max(ans,graph[0][i]);
        cout<<ans<<endl;
    }
    return 0;
}
