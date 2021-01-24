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
    ll t,test = 1, d,m,y,qy;
    cin>>t;
    while(t--){
        ll ans = 0;
        cin>>d>>m>>y>>qy;
        cout<<"Case "<<test++<<": ";
        if(d == 29 && m == 2){
            y += 4;
            while(y <= qy){
                if(y % 400 == 0){
                    ans++;
                }
                else if(y % 4 == 0 && y % 100 != 0){
                    ans++;
                }
                y += 4;
            }
            cout<<ans<<endl;
        }
        else{
            cout<<qy-y<<endl;
        }
    }
    return 0;
}


