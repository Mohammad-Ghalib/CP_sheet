#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n; cin >> n;
    ll arr[n][2], mul=9, sub=1;

    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=0; i<n; i++){
        cout << mul*(arr[i][0] -sub) + arr[i][1] << "\n"; 
    }
}