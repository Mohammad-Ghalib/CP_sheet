#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,cap=0,max=0;  cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        cap -= a;  cap += b;
        max = std::max(max,cap);
    }

    cout << max;
}