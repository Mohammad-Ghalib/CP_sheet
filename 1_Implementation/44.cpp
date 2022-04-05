#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int m1,m2;

        if(s.find('1') != string::npos){
            m1 = s.find('1');
            reverse(s.begin(), s.end());
            m2 = s.find('1');

            int mini = min(m1,m2);

            cout << 2*(n-mini) << "\n";
        }
        else{
            cout << n << "\n";
        }
    }
}