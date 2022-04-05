#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b,c,d,maxi;  cin >> a >> b >> c >> d;

    maxi = max(a,b);
    maxi = max(maxi,c);
    maxi = max(maxi,d);

    if(maxi - a > 0) cout << maxi-a << " ";
    if(maxi - b > 0) cout << maxi-b << " ";
    if(maxi - c > 0) cout << maxi-c << " ";
    if(maxi - d > 0) cout << maxi-d << " ";

}