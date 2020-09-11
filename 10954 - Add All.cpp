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
    while(1){
        ll n,a,b,c,sum = 0;
        cin>>n;
        if(n == 0){
            break;
        }
        priority_queue<int>pq;
        for(int i=0; i<n; i++){
            cin>>a;
            a *= -1;
            pq.push(a);
        }

        while(pq.size() > 1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            c = a + b;
            pq.push(c);
            a *= -1,b *= -1;

            sum += (a+b);
        }
        cout<<sum<<endl;
    }

    return 0;
}

