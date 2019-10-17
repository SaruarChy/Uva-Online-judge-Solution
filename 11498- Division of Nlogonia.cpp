#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m,x,y,i;
    while(1)
    {
        cin>>k;
        if(k==0)
            break;
        cin>>n>>m;
        for(i =0; i<k; i++)
        {
            cin>>x>>y;
            if(x == n || y == m) printf("divisa\n");
            else if(x > n && y > m) printf("NE\n");
            else if(x > n && y < m) printf("SE\n");
            else if(x < n && y > m) printf("NO\n");
            else if(x < n && y < m) printf("SO\n");
        }
    }
    return 0;
}
