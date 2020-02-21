#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int a[1000];
        int c=0;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";
    }
    return 0;
}
