#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n,io,ie; cin >> n;
        long long sum=0, div=2;
        long long arr[n];

        bool e=false, o=false;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];

            if(!e && (arr[i]%div == 0)) e = true;
            if(!o && (arr[i]%div != 0)) o = true;
        }

        if( (sum%div == true) || (e&&o)) cout << "YES\n";
        else cout << "NO\n";

    }

}