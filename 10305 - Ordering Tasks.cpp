#include<bits/stdc++.h>
using namespace std;

int main()
{
    int u,v;
    int node,edge;
    while(1)
    {
        cin>>node>>edge;
        vector<int>adj[node+1];
        int in[node+1];
        memset(in,0,sizeof(in));
        if(node==0 && edge==0)
            break;
        for(int i=0; i<edge; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            in[v]++;
        }
        queue<int>q;
        vector<int>order;
        for(int i=1; i<=node; i++)
        {
            if(in[i]==0)
                q.push(i);
        }
        while(!q.empty())
        {
            int v,u=q.front();
            q.pop();
            order.push_back(u);
            for(int i=0; i<adj[u].size(); i++)
            {
                v=adj[u][i];
                in[v]--;
                if(in[v]==0)
                    q.push(v);
            }
        }
        for(int i=0; i<node; i++)
        {
            if(i)
                cout<<' ';
            cout<<order[i];
        }
        cout<<endl;
    }
    return 0;
}

