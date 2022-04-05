#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,i; cin >> n;
    string s; cin >> s;
    bool b = true;

    for(i=0; i<n-1; i++){
        if(s[i] != s[i+1]){
            b = false;
            break;
        }
    }

    if(!b) cout << "YES\n" << s[i] << s[i+1];
    else cout << "NO\n";

}