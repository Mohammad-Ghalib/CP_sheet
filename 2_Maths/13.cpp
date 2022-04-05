#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int x,y,n; cin >> x >> y >> n;

        int rem = n%x;

        if(rem == y) cout << n << "\n";
        else if(rem > y) cout << n-rem+y << "\n";
        else {
            //if(n>= (n+rem-y)) cout << n+rem-y << "\n";
            cout << n-rem+y-x << "\n";
        }
    }

}