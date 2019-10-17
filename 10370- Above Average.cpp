#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a[1000],i,c,d,count,m;
    float avr,k,n,j;
    while( scanf("%d",&c)==1)
        {
        for(d=1;d<=c; d++)
        {
            avr=0;
            count=0;
            k=0;
            cin>>j;
        for(i=0;i<j;i++)
        {
            cin>>a[i];
            k=k+a[i];
        }
        avr=k/j;
        for(m=0;m<j;m++)
        {
            if(a[m]>avr)
            count=count+1;
        }
    n=(100*count)/j;
    cout<<fixed<<setprecision(3)<<n<<endl;
        }
    }
    return 0;
}
