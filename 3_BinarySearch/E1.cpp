#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s; cin >> s;
    ll pre[3], cost[3], req[3]={0}, r;

    for(int i=0; i<3; i++) cin >> pre[i];

    for(int i=0; i<3; i++) cin >> cost[i];

    cin >> r;

    for(int i=0; i<3; i++){
        if(s[i] == 'B') req[0]++;
        else if(s[i] == 'S') req[1]++;
        else req[2]++;
    }




}