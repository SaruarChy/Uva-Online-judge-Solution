#include<bits/stdc++.h>

using namespace std;
int lcs[1001][1001];
int main()
{
    int n,m;
    string x,y;

    while(getline(cin,x))
    {
        getline(cin,y);
        n=x.size();
        m=y.size();

        for(int i=n;i>=0;i--)
        {
            for(int j=m;j>=0;j--)
            {
                if(i==n || j==m)
                {
                    lcs[i][j]=0;
                    continue;
                }
                if(x[i]==y[j])
                    lcs[i][j]=1+lcs[i+1][j+1];
                else
                    lcs[i][j]=max(lcs[i+1][j],lcs[i][j+1]);
            }
        }

        cout<<lcs[0][0]<<endl;
    }

    return 0;
}
