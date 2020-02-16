#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,test=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[10000];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n, greater<int>());
        cout<<"Case "<<test<<": "<<a[0]<<endl;
        test++;
    }
    return 0;
}
