#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool b = true;

        for(int i=0; i<n/2 && b; i++){
            if( (abs(s[i] - s[n-i-1]) > 2) || (abs(s[i] - s[n-i-1]) == 1) ) b = false;
        }

        if(b) cout << "YES\n";
        else cout << "NO\n";
    }

}