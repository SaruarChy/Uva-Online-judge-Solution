#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        vector<int>a;
        cin>>n;
        int arr[n];
        if(n==0)
            break;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]!= 0)
            {
                a.push_back(arr[i]);
            }
        }
        int l = a.size();
        if(l==0)
            cout<<"0"<<endl;
        else
        {
            for(int i=0; i<l; i++)
            {
                cout<<a[i];
                if(i!=l-1)
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
