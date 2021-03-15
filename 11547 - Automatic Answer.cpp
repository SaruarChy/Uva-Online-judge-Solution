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
    ll t,n;
    cin>>t;
    while(t--){
        ll ans = 0;
        cin>>n;
        ans = n * 567;
        ans /= 9;
        ans += 7492;
        ans *= 235;
        ans /= 47;
        ans -= 498;
        string s;
        s = to_string(ans);
        int len = s.length();
        cout<<s[len-2]<<endl;
    }
    return 0;
}

