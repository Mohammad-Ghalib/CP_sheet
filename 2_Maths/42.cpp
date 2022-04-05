#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t;
	cin >> t;
	while (t--) {
		ll x, y, a, b;
		cin >> x >> y >> a >> b;
		if (a + a <= b) cout << (x + y) * a << '\n';
		else cout << min(x, y) * b + abs(x - y) * a << '\n';
	}
}