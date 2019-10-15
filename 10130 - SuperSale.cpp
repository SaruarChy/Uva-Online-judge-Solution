#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int m,int p[],int w[]);
int main()
{
    int t,n,p[1000],w[1000];
    int man,m;
    int max;
    cin>>t;
    while(t--)
    {
        int result=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>p[i]>>w[i];
        }
        cin>>man;
        for(int i=0; i<man; i++)
        {
            cin>>m;
            max=knapsack(n,m,p,w);
            result+=max;
        }
        cout<<result<<endl;
    }
    return 0;
}
int knapsack(int n,int m,int p[],int w[])
{
    int b[1000][102],i,j;
    for(i=0; i<=n; i++)
        b[i][0]=0;
    for(i=0; i<=m; i++)
        b[0][i]=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            if(w[i]<=j)
            {
                if(p[i]+b[i-1][j-w[i]] > b[i-1][j])
                    b[i][j]=p[i]+b[i-1][j-w[i]];
                else
                    b[i][j]=b[i-1][j];
            }
            else
                b[i][j]=b[i-1][j];
        }
    return (b[n][m]);
}
