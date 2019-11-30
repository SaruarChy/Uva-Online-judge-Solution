#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t,a[1050],i,k,l,cnt;
    cin>>t;
    getchar();
    string s;
    while(t--)
    {
        getline(cin,s);
        stringstream ss(s);
        int j=0;
        while(ss >> a[j])
            j++;
        cnt=0;
        for(i=0; i<j; i++)
            for(l=i+1; l<j; l++)
                cnt=max(cnt,gcd(a[i],a[l]));

        cout<<cnt<<endl;
    }
    return 0;
}
