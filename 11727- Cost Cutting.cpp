#include<bits/stdc++.h>
using namespace std;
int main()
{
    static unsigned i, n, a, b, c;
    cin>>n;
    for(i=1; i<=n; ++i)
    {
        cin>>a>>b>>c;

        if(a > b && a > c)
            printf("Case %u: %u\n", i, b > c ? b : c);
        else if(b > c)
            printf("Case %u: %u\n", i, c > a ? c : a);
        else
            printf("Case %u: %u\n", i, a > b ? a : b);
    }
    return 0;
}
