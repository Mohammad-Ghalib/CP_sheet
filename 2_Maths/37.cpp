#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int r,g,b,w; cin >> r >> g >> b >> w;
        bool possible = false;

        possible |= ( (r&1)+(g&1)+(b&1)+(w&1) ) <= 1;
        if(r&&g&&b){
            r--; g--; b--; w += 3;
            possible |= ( (r&1)+(g&1)+(b&1)+(w&1) ) <= 1;
        }

        if(possible) cout << "Yes\n";
        else cout << "No\n";

    }
}