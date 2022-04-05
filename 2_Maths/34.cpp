#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        if(x==1){
            if(y==1) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(x==2 || x==3){
            if(y <= 3) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "YES\n";
    }

}