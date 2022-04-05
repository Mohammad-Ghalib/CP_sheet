#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, ans=0; cin >> n;

    //ans = n + (n-1)*(n-1);
    //cout << ans;
    for(int i=1; i<n; i++){
        ans += i*(n-i);
    }

    cout << ans+n;
}