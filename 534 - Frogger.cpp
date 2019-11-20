#include<bits/stdc++.h>
using namespace std;
double INTMax (int c,int b)
{
    double re =1;
    for(int i=1; i<=b; i++)
        re*=c;
    return re;
}
int main()
{
    int test=1,n,i,j,k;
    while(1)
    {
        int u[210],v[210];
        double graph[200+10][200+10];
        cin>>n;
        if(n==0)
            break;
        for(i=0; i<n; i++)
            cin>>u[i]>>v[i];

        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
                graph[i][j]=graph[j][i]=sqrt(INTMax(u[i]-u[j],2)+INTMax(v[i]-v[j],2));

        for(k=0; k<n; k++)
            for(i=0; i<n; i++)
                for(j=0; j<n; j++)
                    graph[i][j]=min(graph[i][j],max(graph[i][k],graph[k][j]));
        cout<<"Scenario #"<<test<<endl;
        cout<<"Frog Distance = "<<setprecision(3)<<fixed<<graph[0][1]<<endl<<endl;
        test++;
    }
    return 0;
}
