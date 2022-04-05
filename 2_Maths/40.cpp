#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        if(k==1){
            cout << 1 << "\n";
            continue;
        }
        if(k>n) cout << (k/n) + (k%n) << "\n";
        else cout << (n/k) + (n%k) << "\n";
    }
}