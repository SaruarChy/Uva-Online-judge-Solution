#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j=1;
    while(scanf("%d",&a)==1 && (a>=0))
    {
        if(a==1)
        printf("Case %d: 0\n",j);
        for(i=0;i<14;i++)
            if(pow(2,i)<a && a<=pow(2,i+1))
                printf("Case %d: %d\n",j,i+1);
        j++;
    }
    return 0;
}
