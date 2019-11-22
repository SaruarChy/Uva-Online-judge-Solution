#include<iostream>
#include<map>
#include<algorithm>
#define     INT_MAX     -1
using namespace std;
int main()
{
    int n,e,w,i,j,k,cnt,test=1;
    string s,t;
    while(1)
    {
        cin>>n>>e;
        if(n==0)
            break;
        map<string,int>map;
        cnt=1;
        int graph[205][205];
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                graph[i][j]=INT_MAX;
                if(i==j)
                    graph[i][j]=0;
            }
        for(i=1; i<=e; i++)
        {
            cin>>s>>t>>w;
            if(map[s]==0)
                map[s]=cnt++;
            if(map[t]==0)
                map[t]=cnt++;
            graph[map[s]][map[t]]=graph[map[t]][map[s]]=w;
        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    graph[i][j]=max(graph[i][j],min(graph[i][k],graph[k][j]));
        cin>>s>>t;
        cout<<"Scenario #"<<test<<endl;
        test++;
        cout<<graph[map[s]][map[t]]<<" tons"<<endl<<endl;
    }
    return 0;
}
