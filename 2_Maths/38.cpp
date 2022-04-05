#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s,r; cin >> s;
    r = s;
    reverse(r.begin(), r.end());
    cout << s+r;
}