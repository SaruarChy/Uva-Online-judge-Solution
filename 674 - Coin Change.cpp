#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    int dp[7500];
    int coin[]={1,5,10,50,25};
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(int i=0; i<5; i++)
        for(int j=coin[i]; j<7500; j++)
            dp[j]+=dp[j-coin[i]];

    while(scanf("%d",&k)==1)
    {
        cout<<dp[k]<<endl;
    }
    return 0;
}
