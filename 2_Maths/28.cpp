#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        bool n2=false, n3=false, n0=false;
        int sum=0;

        for(int i=0; i<s.size(); i++){
            if (s[i] == '0') {
                if (n0) {
                    n2 = true;
                } else {
                    n0 = true;
                }
            } else {
                if (s[i] % 2 == 0) {
                    n2 = true;
                }
            }
            sum += s[i] - '0'; 
        }

        if(sum%3 == 0) n3=true;

        if(n0 && n2 && n3) cout << "red\n";
        else cout << "cyan\n";
    }

}