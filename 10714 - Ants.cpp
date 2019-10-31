#include<iostream>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;
Copy_maris_nah
{
    int t,n,m,l,ant,ants;
    cin>>t;
    while(t--)
    {
        cin>>l>>ant;
        m=n=0;
        while(ant--)
        {
            cin>>ants;
            m=max(m,min(l-ants,ants));
            n=max(n,max(l-ants,ants));
        }
        cout<<m<<" "<<n<<endl;

    }
    Okay_bye;
}
