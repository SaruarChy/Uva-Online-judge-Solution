#include<bits/stdc++.h>
using namespace std;
int n,a[3005],b[3005];
int main()
{
    while(scanf("%d",&n)==1)
    {
        bool jolly=true;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-1; i++)
        {
            b[i]=abs(a[i]-a[i+1]);
        }
        sort(b,b+n-1);
        for(int i=0; i<n-1; i++)
        {
            if(b[i]!=i+1)
                jolly=false;
        }
        if(jolly==false)
            cout<<"Not jolly\n";
        else
            cout<<"Jolly\n";
    }
}
