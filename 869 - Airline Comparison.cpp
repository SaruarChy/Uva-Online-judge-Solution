#include<iostream>
#include<vector>
#include<algorithm>
#define  Size     128
using namespace std;
int main()
{
    int t,n,m;
    int i,j,k;
    char u,v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<vector<int> > graph1(Size, vector<int>(Size,0));
        for(i=0; i<n; i++)
        {
            cin>>u>>v;
            graph1[u][v]=1;
        }
        for(k=1; k<Size; k++)
            for(i=0; i<Size; i++)
                for(j=0; j<Size; j++)
                    if(graph1[i][k] && graph1[k][j])
                        graph1[i][j]=1;
        cin>>m;
        vector<vector<int> > graph2(Size, vector<int>(Size,0));
        for(i=0; i<m; i++)
        {
            cin>>u>>v;
            graph2[u][v]=1;
        }
        for(k=1; k<Size; k++)
            for(i=0; i<Size; i++)
                for(j=0; j<Size; j++)
                    if(graph2[i][k] && graph2[k][j])
                        graph2[i][j]=1;

        if(graph1==graph2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        if(t)
            cout<<endl;

    }
}
