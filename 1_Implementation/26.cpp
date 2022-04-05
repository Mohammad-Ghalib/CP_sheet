#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, in=0; cin >> n;
    string s,ans; cin >> s;
    for(int i=0; i<n; i++){
        ans += s[i];
        i += in;
        in++;
    }
    cout << ans;
}