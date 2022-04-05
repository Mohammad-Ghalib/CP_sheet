#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k, count=0, sum=0; cin >> n >> k;

    vector<pair<int,int>> v(n);
    vector<int> pos;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v[i] = make_pair(a,i+1);
    }

    sort(v.begin(), v.end());

    bool b=true;

    for(int i=0; i<n && b; i++){
        if(sum+v[i].first <= k){
            sum += v[i].first;
            pos.push_back(v[i].second);
            count++;
        }
        else b=false;
    }

    cout << count <<"\n";
    for(int i=0; i<count; i++){
        cout << pos[i] << " ";
    }
}