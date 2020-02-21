#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test=1;
    string s;
    while (getline(cin,s))
    {
        if(s[0]=='#')
            break;
        else if(s[0]=='H' && s[1]=='E' && s[2]=='L' && s[3]=='L' && s[4]=='O')
            cout<<"Case "<<test++<<": ENGLISH\n";
        else if(s[0]=='H' && s[1]=='O' && s[2]=='L' && s[3]=='A')
            cout<<"Case "<<test++<<": SPANISH\n";
        else if(s[0]=='H' && s[1]=='A' && s[2]=='L' && s[3]=='L' && s[4]=='O')
            cout<<"Case "<<test++<<": GERMAN\n";
        else if(s[0]=='B' && s[1]=='O' && s[2]=='N' && s[3]=='J' && s[4]=='O' && s[5]=='U' && s[6]=='R')
            cout<<"Case "<<test++<<": FRENCH\n";
        else if(s[0]=='C' && s[1]=='I' && s[2]=='A' && s[3]=='O')
            cout<<"Case "<<test++<<": ITALIAN\n";
        else if(s[0]=='Z' && s[1]=='D' && s[2]=='R' && s[3]=='A' && s[4]=='V' && s[5]=='S' && s[6]=='T' && s[7]=='V' && s[8]=='U' && s[9]=='J' && s[10]=='T' && s[11]=='E')
            cout<<"Case "<<test++<<": RUSSIAN\n";
        else
            cout<<"Case "<<test++<<": UNKNOWN\n";
    }
    return 0;
}
