#include<bits/stdc++.h>
#include<iostream>
#define oo 0xffff

using namespace  std;
int main()
{
    int n,u,v,m;
    int i,j,k;
    int graph[101][101];
    while(cin>>n)
    {
        if(!n)
            break;
        memset(graph,0,sizeof(graph));
        while(cin>>u)
        {
            if(!u)
                break;
            while(cin>>v)
            {
                if(!v)
                    break;
                graph[u][v]=1;
            }

        }
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(graph[i][j]==0)
                    graph[i][j]=oo;

        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
        cin>>m;
        while(m--)
        {
            int x;
            cin>>x;
			int Ans[101], At=0;
			for(i=1; i<=n; i++)
				if(graph[x][i] == oo)
					Ans[At++] = i;
			printf("%d", At);
			for(i=0; i<At; i++)
				printf(" %d", Ans[i]);
			puts("");
        }
    }
    return 0;
}
