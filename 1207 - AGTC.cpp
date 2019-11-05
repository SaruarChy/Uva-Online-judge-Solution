#include<bits/stdc++.h>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;
char x[505],y[505];

int dp[505][505] = {}, i, j, n, m;

void editdistance()
{
    int i,j;
    for(i=1; i<=n; i++)
        dp[i][0]=i;
    for(i=1; i<=m; i++)
        dp[0][i]=i;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            if(x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;

        }
    cout<<dp[n][m]<<endl;
}
Copy_maris_nah
{
    while(scanf("%d %s", &n, x) == 2) {
        scanf("%d %s", &m, y);
        editdistance();
    }
    Okay_bye;
}
