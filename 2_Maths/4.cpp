#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;

        if(n<3) cout << 1 <<"\n";
        else{
            n -= 2;
            int ans = n/x;

            if(n%x == 0) cout << ans+1 << "\n";
            else cout << ans+2 << "\n";
        }

    }

}