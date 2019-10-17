#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld%lld", &a,&b)!=EOF)
    {
        if(a>b)
        {
            cout<<a-b<<endl;
        }
        else
            cout<<b-a<<endl;

    }
    return 0;

}
