#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b){

    int temp;
    while (b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){

    int N,G;
    while(scanf("%d",&N) == 1){
      if(N == 0)break;
      G = 0;
      for(int i = 1; i < N; i++){
        for(int j = i+1; j <= N; j++){
          G+=gcd(i,j);
        }
      }
      cout<<G<<endl;
    }
    return 0;
}
