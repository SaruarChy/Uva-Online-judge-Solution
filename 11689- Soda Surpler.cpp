#include<bits/stdc++.h>
int main()
{
    int N,e,f,c,a,b,d,i;
    while (scanf("%d",&N)==1)
    {
        for (i=0;i<N;i++)
        {
            cin>>e>>f>>c;
            b=0;
            d=e+f;
            while (d>=c)
            {
                a=d/c;
                b=b+a;
                d=a+(d%c);
            }
            cout<<b<<endl;
        }
    }
    return 0;
}
