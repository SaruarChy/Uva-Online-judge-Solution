//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,d,s;
    while(1){
        cin>>n;
        if(n == 0)break;
        if(n == 1){
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: 1"<<endl;
            continue;
        }
        queue<int>q;
        for(int i=1; i<=n; i++){
            q.push(i);
        }
        vector<int>v;
        while(q.size() > 1){
            d = q.front();
            v.pb(d);
            q.pop();
            d = q.front();
            q.push(d);
            q.pop();
        }

        cout<<"Discarded cards: ";
        for(int i=0; i<n-1; i++){
            cout<<v[i];
            if(i == n-2){
                cout<<endl;
            }
            else{
                cout<<", ";
            }
        }
        cout<<"Remaining card: "<<d<<endl;
    }


    return 0;
}

