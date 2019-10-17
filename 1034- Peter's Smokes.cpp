#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int n,k,result,get;
   while(scanf("%ld%ld",&n,&k)==2)
   {
      result=0;
      result=n+n/k;
      get=n/k+n%k;
       while(get>=k)
       {
          result=result+get/k;
          get=get/k+get%k;
       }
       cout<<result<<endl;
  }
   return(0);
}
