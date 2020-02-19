#include<bits/stdc++.h>
using namespace std;

int main (void)
{
	char c;
	bool first = true;

	while (cin.get(c))
    {
		if (c == '"')
		{
			if (first)
			{
			    first = false;
                c = '`';
            }
			else
            {
                first = true;
                c = '\'';
            }
			cout << c << c;
		}
		else
			cout << c;
	}

	return 0;
}
/*
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"
*/
