#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    char s1[]="Hajj";
    char s2[]="Umrah";
    char s[22];
    while(scanf("%s",&s)!='*')
    {
        if(!strcmp(s,"*"))
        {
            break;
        }
        if(0==strcmp(s,s1))
        {
            printf("Case %d: Hajj-e-Akbar\n",i+1);
        }
        if(0==strcmp(s,s2))
        {
            printf("Case %d: Hajj-e-Asghar\n",i+1);
        }
        i++;
    }
    return 0;
}
