#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k; cin >> n >> k;
    int arr[k+1] = {0}, a, ans=0;
    vector<pair<int,int>> v;

    int num = (n+1)/2;

    for(int i=0; i<n; i++){
        cin >> a;
        arr[a]++;
    }

    // for(i=1; i<=n; i++){
    //     v.push_back(make_pair(arr[i], i));
    // }

    for(int i=1; i<=k && num>=0; i++){
        //v.push_back(make_pair(arr[i], i));
        ans += arr[i]/2;
        num -= arr[i]/2;
    }

    if(num > 0) cout << (2*ans)+num << "\n";
    else cout << 2*ans << "\n";


}