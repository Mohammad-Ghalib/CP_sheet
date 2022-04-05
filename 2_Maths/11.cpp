#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        ll a,b,mul=2, mini, maxi; cin >> a >> b;
        if(a==b){
            cout << mul*mul*a*a << "\n";
            continue;
        }

        mini = min(a,b);
        maxi = max(a,b);

        if(mul*mini >= maxi){
            cout << mul*mul*mini*mini << "\n";
        }
        else{
            cout << maxi*maxi << "\n";
        }


    }
}