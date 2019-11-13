#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<climits>
#define pp pair<int,int>
#define MX 10000+5

using namespace std;
int const MAX=50001;
int dis[MAX];
vector<pp>adj[MAX];

bool dijkastra(int s,int t)
{
    memset(dis,10010,sizeof(dis));
    int i,u,v,w;
    priority_queue<pp,vector<pp>,greater<pp> >pq;
    pq.push(pp(0,s));
    dis[s]=0;
    while(!pq.empty())
    {
        u=pq.top().second;
        pq.pop();
        if(u==t)
        {
            while(!pq.empty())pq.pop();
            return true;
        }
        for(i=0;i<adj[u].size();i++)
        {
            v=adj[u][i].first;
            w=adj[u][i].second;
            if(dis[u]+w<dis[v]){
                    dis[v]=dis[u]+w;
                pq.push(pp(dis[v],v));
            }
        }
    }
   while(!pq.empty())
       pq.pop();

   return false;
}

int main()
{
    int test,k=1;
    int i,u,v,w;
    int n,e,s,t;
    cin>>test;
    while(test--)
    {
        cin>>n>>e>>s>>t;
        for(i=0; i<e; i++)
        {
            cin>>u>>v>>w;
            adj[u].push_back(pp(v,w));
            adj[v].push_back(pp(u,w));
        }
        cout<<"Case #"<<k<<":";
        if(e!=0 && dijkastra(s,t))
            cout<<dis[t];
        else
            cout<<"unreachable";
    cout<<endl;
    memset(adj,0,sizeof(adj));
    k++;
    }
    return 0;
}
