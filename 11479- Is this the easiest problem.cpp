#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,i,t;
    while(scanf("%ld",&t)==1)
    {
        i=1;
        while(i<=t)
        {
            cin>>a>>b>>C
            if(a+b<=c ||  b+c<=a || c+a<=b)
            {
                printf("Case %ld: Invalid\n", i);
            }
            else if(a<=0 || b<=0 || c<=0)
            {
                printf("Case %ld: Invalid\n",i);
            }
            else if(a==b && b==c)
            {
                printf("Case %ld: Equilateral\n", i);
            }
            else if(a==b || a==c || b==c)
            {
                printf("Case %ld: Isosceles\n", i);
            }
            else
                printf("Case %ld: Scalene\n",i);

            i++;
        }
    }

    return 0;
}
