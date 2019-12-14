#include <bits/stdc++.h>
using namespace std;

string sentence;
int main()
{
	int t,n;
	cin>>t;
	while (t--)
    {
		cin>>sentence;
		cin>>n;

		char update[128], s1[10], s2[10];
		for (int i=0; i<128; i++)
			update[i] = i;
		for (int i=0; i<n; i++)
        {
			cin>>s1>>s2;
			for (int j='A'; j<='Z'; j++)
				if (update[j] == s2[0])
					update[j] = s1[0];
		}
		for (int i = 0; sentence[i]; i++)
			cout<<update[sentence[i]];
		puts("");
	}
	return 0;
}
/*
2
AVVU_TUMI_COLING_PARO_NAY
3
B V
D L
H Y
AABBCCY
3
A B
B C
C A
*/
