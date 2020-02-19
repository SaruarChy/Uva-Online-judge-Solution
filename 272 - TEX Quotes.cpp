#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char c;
    while (cin.get(c))
    {
        bool work = true;
        if(c=='"')
        {
            if(work)
            {
                work = false;
                c= '`';
            }
            else
            {
                work = true;
                c = '\'';
            }
            cout<<c<<c;
        }
        else
            cout<<c;
    }
    return 0;
}
/*
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"
*/
