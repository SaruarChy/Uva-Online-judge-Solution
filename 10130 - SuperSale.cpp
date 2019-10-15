#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    int DP[31]={};
    cin>>t;
    while(t--)
    {
        int n,p,w,g,mw,result= 0;
        cin>>n;
        for(i=0; i<n; i++){
            cin>>p>>w;
            for(j=30; j>=w; j--){
                if(DP[j] < DP[j-w]+p){
                    DP[j]=DP[j-w]+p;
                }
            }
        }
        cin>>g;
        while(g--){
            cin>>mw;
            result+=DP[mw];
        }
        cout<<result<<endl;
    }
    return 0;
}
