#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t; 
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        if(m==0){
            cout << 0 << "\n";
            continue;
        }
        if(n/k >= m){
            cout << m << "\n";
            continue;
        }
        int ma = n/k;
        m -= ma;
        int ans = ma -( (m/(k-1)));
        if(m%(k-1) == 0) cout << ans << "\n";
        else cout << ans-1 << "\n";
    }
}