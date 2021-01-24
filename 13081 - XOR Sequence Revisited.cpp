#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t, l, r, xr = 0;
//    vector<ll>v;
//    v.pb(1);
//    cout<<v[0]<<" ";
//    for(ll i=1; i<100; i++){
//        xr = v[i-1] ^ i;
//        v.pb(xr);
//        cout<<v[i]<<" ";
//    }
    cin>>t;
    while(t--){
        ll xr = 0, an = 0;
        cin>>l>>r;
        if(l % 4 == 0)
            xr = l + 1;
        else if(l % 4 == 1)
            xr = 0;
        else if(l % 4 == 2)
            xr = l;
        else
            xr = 1;

        r = min(l+4,r);
        for(ll i = l+1; i<=r; i++ ){
            if( i % 4 == 0)
                an = i+1;
            else if(i % 4 == 1)
                an = 0;
            else if(i % 4 == 2)
                an = i;
            else
                an = 1;

            xr = xr & an;
        }
        cout<<xr<<endl;

    }
    return 0;
}
