#include <iostream>
using namespace std;

int main(){
    int l,g,t;
    cin>>t;
    while(t--){
        cin>>g>>l;
        if(l%g)
            cout<<"-1"<<endl;
        else
            cout<<g<<" "<<l<<endl;
    }
    return 0;
}
