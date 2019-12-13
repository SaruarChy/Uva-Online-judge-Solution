#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	long long dp[10000];
	memset(dp,0,sizeof dp);
	dp[0] = 1;
	for(i = 1; i*i*i <10000; i++)
		for(j = i*i*i; j <10000; j++)
			dp[j] += dp[j-i*i*i];

	while(scanf("%d", &k) == 1)
    {
		cout<<dp[k]<<endl;
	}
    return 0;
}
