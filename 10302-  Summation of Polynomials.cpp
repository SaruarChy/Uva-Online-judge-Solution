#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,c;
    while(scanf("%lld",&a)!=EOF)
    {
        long long int ans=0;
        while(a>0)
        {
            ans+=a*a*a;
            a--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
