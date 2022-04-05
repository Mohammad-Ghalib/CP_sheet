#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,t,ans=1,index=1, nIn=1; cin >> n >> t;

    vector<int> v;
    v.push_back(0);
    for(int i=1; i<n; i++){
        int a;  cin >> a;
        v.push_back(a);
    }

    while((ans <= t) && (index < n)){
        if(ans == t) break;
        ans += v[index];
        index = ans;
        //nIn += v[index];
        //index = nIn;
    }

    //cout << ans << " " << t << " ";

    if(ans == t) cout << "YES\n";
    else cout << "NO\n";

}