#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int a,b,diff; cin >> a >> b;
        diff = abs(a-b);
        //cout << diff << "  ";

        cout << (diff+9)/10 << "\n";
    }

}