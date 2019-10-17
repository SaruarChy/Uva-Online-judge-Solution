#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j=0;
    scanf("%d", &n);
    char s[100];
    for(i=0; i<n; i++)
    {
        scanf("%s", s);
        if (s[j]== 'o' && s[j+1] =='n' || s[j] == 'o' && s[j+2] == 'e' || s[j+1] == 'n' || s[j] == 'o' && s[j+2] == 'e' || s[j+1] == 'n' && s[j+2] == 'e')
        {
            cout<<"1"<<endl;
        }
        else if (s[j] =='t' && s[j+1] == 'w' || s[j] == 't' && s[j+2] == 'o' || 't' && s[j+1] == 'w' || s[j] == 't' && s[j+2] == 'o' || s[j+1] == 'w' && s[j+2])
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}
