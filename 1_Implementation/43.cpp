#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n; cin >> n;
    // int rep = n/11;
    // n %= 11;
    // int rep4 = rep, rep7 = rep;

    // if(n%4 == 0) rep4 += n/4;
    // else if(n%7 == 0) rep7 += n/7;
    // else {
    //     cout << -1;
    //     return 0;
    // }

    // for(int i=0; i<rep4; i++){
    //     cout << 4;
    // }
    // for(int i=0; i<rep7; i++){
    //     cout << 7;
    // }

    int m = n/7;
	for (int a = m; a >= 0; -- a) {
		int tot = n - a * 7, k = tot / 4;
		if ((k == 0 && a == 0) || tot % 4 != 0) continue;
		for (int i = 1; i <= k; ++ i) cout << "4";
		for (int i = 1; i <= a; ++ i) cout << "7"; cout << endl;
		return 0;
		
	}
	puts("-1");

}