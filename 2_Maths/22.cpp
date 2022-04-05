#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,m,k;  cin >> n >> m >> k;
    ll arr[n];
    for(ll i=0; i<n; i++) cin >> arr[i];

    sort(arr, arr+n, greater<ll>());

    ll full = m/(k+1), rem = m%(k+1);

    ll ans = (k*full+rem)*arr[0] + full*arr[1];

    //for(ll i=0; i<n; i++) cout << arr[i] << " ";
    //cout << full << " " << rem;

    cout << ans;

}