#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, t;
	long long int a, b;

	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(m > n)
			cout<<"impossible\n";
		else {
			b = (n - m)/2;
			a = m + b;
			if(a + b == n && abs(a - b) == m)
				cout<<a<<" "<<b<<endl;
			else
				cout<<"impossible\n";
		}
	}
	return 0;
}
//https://algorithmist.com/wiki/UVa_10812_-_Beat_the_Spread!
/*
2
40 20
20 40
*/
