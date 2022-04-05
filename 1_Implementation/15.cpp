#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,n,w,cost=0; cin >> k >> n >> w;

    cost = ((w*(w+1))/2) * k;
    if(cost <= n) cout << 0;
    else cout << cost - n; 
}