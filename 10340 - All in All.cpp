#include<bits/stdc++.h>
using namespace std;
char s[1000000],t[1000000];
int main()
{

    int i,j,count,d;
    while(scanf("%s %s",&s,&t)==2)
    {
        d=0;
        for(i=d;i<strlen(s);i++)
        {
            count=0;
            if(i>strlen(t))
                break;
            for(j=d; j<strlen(t);j++)
            {
                if(s[i]==t[j])
                {
                    count=1;
                    d=j+1;
                    break;
                }
            }
        if(count==0)
            break;
        }
    if(count==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
return 0;
}
