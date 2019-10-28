#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,count;
    string s;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        cin>>n;
        cin>>s;
        count=0;
        for(i=0; i<n;)
        {
            if(s[i]=='.')
            {
                count++;
                i=i+3;
            }
            else
                i++;
        }
        cout<<"Case "<<j<<": "<<count<<endl;
    }
    return 0;
}
