#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        string s1,s2,s1n,s2n; cin >> s1 >> s2;
      /*  if(s1.size() == s2.size()){
            if(s1==s2) cout << s1 << "\n";
            else cout << -1 << "\n";
        }
        else if(s1.size() < s2) */

        int rep = (s1.size() * s2.size())/__gcd(s1.size(), s2.size());

        //cout << rep << "\n";

        int l1 = s1.size(), l2 = s2.size();

        for(int i=0; i<(rep/l1); i++) s1n += s1;
        for(int i=0; i<(rep/l2); i++) s2n += s2;

        if(s1n == s2n) cout << s1n << "\n";
        else cout << -1 << "\n";
    }
}