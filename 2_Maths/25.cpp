#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    ll a[t], div = 14;

    for(int i=0; i<t; i++){
        cin >> a[i];
    }

    for(int i=0; i<t; i++){
        if(a[i] <= div) cout << "NO\n";
        else if( (a[i]%div) <= 6 && (a[i]%div) > 0) cout << "YES\n";
        else cout << "NO\n";
    }
}