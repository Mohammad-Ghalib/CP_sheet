#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n; cin >> n;
    ll arr[n], sum=0, ans=0;
    //cout << n << "       ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
        ans = max(ans,arr[i]);
    }


    cout << ans;
}