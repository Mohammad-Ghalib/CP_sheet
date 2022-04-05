#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;  cin >> n >> k;

    while(k--){
        int a = n%10;
        if(a==0){
            n /= 10;
        }
        else{
            n--;
        }
    }

    cout << n;
}