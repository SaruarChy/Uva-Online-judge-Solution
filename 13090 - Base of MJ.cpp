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
    ll t, test = 1, n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        n--;
        cout<<"Case "<<test++<<": "<<(n/d)<<endl;
    }
    return 0;
}

