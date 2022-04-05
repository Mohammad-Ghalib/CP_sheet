#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int k, r, nk, ans=1, mul=2; cin >> k >> r;

    nk =k;

    while( (nk%10 != r) && (nk%10 != 0)){
        nk = k*mul;
        mul++;
        ans++;
    }

    cout << ans;

}