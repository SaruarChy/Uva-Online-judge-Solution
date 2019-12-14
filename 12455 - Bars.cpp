#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,w,n,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>w>>n;
        int dp[1005] = {};
        dp[0] = 1;
        for(i = 0; i < n; i++)
        {
            cin>>p;
            for(j=w-p; j>=0; j--)
                if(dp[j] && !dp[j+p])
                    dp[j+p] = 1;
        }
        if(dp[w])
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/*
4
25
4
10 12 5 7
925
10
45 15 120 500 235 58 6 12 175 70
120
5
25 25 25 25 25
0
2
13 567
*/
