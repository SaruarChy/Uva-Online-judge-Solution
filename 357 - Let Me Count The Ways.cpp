#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long dp[30001] = {};
    int coin[]={1,5,10,25,50};
    int i,j;
    dp[0]=1;
    for(i = 0; i < 5; i++)
        for(j=coin[i]; j<=30000; j++)
            dp[j]+= dp[j-coin[i]];

    while(scanf("%d",&i)==1)
    {
        if(dp[i]!=1)
            printf("There are %lld ways to produce %d cents change.\n", dp[i],i);
        else
            printf("There is only 1 way to produce %d cents change.\n", i);
    }
    return 0;
}
