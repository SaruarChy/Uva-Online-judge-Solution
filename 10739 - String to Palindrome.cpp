#include<iostream>
#include<cstring>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0

using namespace std;
int i,j,n,m;
string x,y;
int dp[10000][10000];
void lcs()
{
    m=x.length();
    for(i=0; i<=m; i++)
        dp[i][0]=i;
    for(j=0; j<=m; j++)
        dp[0][j]=j;
    for(i=1; i<=m; i++)
        for(j=1; j<=m; j++)
        {
            if(x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
        }
}
Copy_maris_nah
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        cin>>x;
        y=x;
        reverse(y.begin(),y.end());
        lcs();
        cout<<"Case "<<k<<": "<<dp[m][m]/2<<endl;
        k++;
    }
    Okay_bye;
}
