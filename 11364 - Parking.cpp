#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100];
    int up,down;
    cin>>t;
    while(t--)
    {
        up=0,down=1009000;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            up=max(up,a[i]);
        }
        down=a[0];
        for(int i=0; i<n; i++){
            if(down>=a[i])
                down=a[i];
        }
        cout<<(up-down)*2<<endl;
    }
}
