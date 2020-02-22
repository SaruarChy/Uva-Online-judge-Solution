#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str == "DONE")
        break;

        string outR = "", out;
        for(int x=0; x<str.size(); x++)
            if(isalpha(str[x]))
                outR += tolower(str[x]);

        out = outR;
        reverse(outR.begin(), outR.end());
        if(outR == out)
        printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}/*
Madam, Im adam!
Roma tibi subito motibus ibit amor.
Me so hungry!
Si nummi immunis
DONE
*/
