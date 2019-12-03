#include<iostream>
#include<cstring>
#include<algorithm>
#define     INT_MAX     2147483647
#define     INT_MIN     -2147483648
using namespace std;
struct edges
{
    int u;
    int v;
    int w;
}e[2000+10];

int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(i=0; i<m; i++)
            cin>>e[i].u>>e[i].v>>e[i].w;
        int dis[1000+10];
        for(i=0; i<=n; i++)
            dis[i]=INT_MAX;
        dis[0]=0;
        for(i=0; i<n-1; i++)
            for(j=0; j<m; j++)
                if(dis[e[j].u]+e[j].w < dis[e[j].v])
                    dis[e[j].v]=dis[e[j].u]+e[j].w;
        bool there_is_a_negative_cycle=false;

        for(j=0; j<m; j++ )
            if( dis[e[j].u]+e[j].w < dis[e[j].v])
                there_is_a_negative_cycle= true;
        if(there_is_a_negative_cycle)
            cout<<"possible"<<endl;
        else
            cout<<"not possible"<<endl;
    }
    return 0;
}
