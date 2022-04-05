#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll w,h;  cin >> w >> h;
        ll ans=0, max=0;

        for(int i=0; i<2; i++){
            ll x; cin >> x;
            ll f; cin >> f;
            for(int j=1; j<x-1; j++){
                ll a; cin >> a;
                //ans = std::max(max,)
            }
            ll l; cin >> l;

            max = std::max(max,(l-f)*h);
        }

        for(int i=0; i<2; i++){
            ll x; cin >> x;
            ll f; cin >> f;
            for(int j=1; j<x-1; j++){
                ll a; cin >> a;
                //ans = std::max(max,)
            }
            ll l; cin >> l;

            max = std::max(max,(l-f)*w);
        }

        cout << max << "\n";
    }
}