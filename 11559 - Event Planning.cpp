#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Npeople,budget,hotel,week,price,beds;

    while(cin>>Npeople>>budget>>hotel>>week)
    {
        int ans[10000],cost=0,length=0;
        int i,j;
        for(i=1; i<=hotel; i++)
        {
            cin>>price;
            for(j=1; j<=week; j++)
            {
                cin>>beds;
                if(beds>=Npeople)
                {
                    cost=Npeople*price;
                    if(cost<=budget)
                        ans[length++]=cost;
                }
            }
        }
        if(length==0)
            cout<<"stay home"<<endl;
        else
        {
             sort(ans,ans+length);
             cout<<ans[0]<<endl;
        }
    }
    return 0;
}
