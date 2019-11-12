#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,l;
    long long int node,edge;
    while(1)
    {
        int u,v;
        cin>>node>>edge;
        if(node==0 && edge==0)
            break;
        int in[node+1];
        vector<int>adj[node+1];
        memset(in,0,sizeof(in));
        for(i=0; i<edge; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            in[v]++;
        }
        queue<int>q;
        vector<int>order;
        for(i=1; i<node; i++)
            if(in[i]==0)
                q.push(i);
        while(!q.empty())
        {
            int v,u=q.front();
            q.pop();
            order.push_back(u);
            for(i=0; i<adj[u].size(); i++)
            {
                v=adj[u][i];
                in[v]--;
                if(in[v]==0)
                    q.push(v);
            }
        }
        l=order.size();
        if(l!=node)
            cout<<"IMPOSSIBLE"<<endl;
        else
            for(i=0; i<l; i++)
            {
                cout<<order[i]<<endl;
            }
    }
    return 0;
}
