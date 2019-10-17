#include<bits/stdc++.h>
using namespace std;
void Ternary(long long int value);
int main()
{
    long long int value;
    while(scanf("%lld",&value)==1)
    {
        if(value<0)
            break;
        Ternary(value);
        printf("\n");
    }
    return 0;
}

void Ternary(long long int value)
{
    int mod;
    mod=value%3;
    value/=3;
    if(value!=0)
    {
        Ternary(value);
        printf("%d",mod);
    }

    else
        printf("%d",mod);
}
