#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    if(n == 1){
        cout << s;
        return 0;
    }

    s.erase(remove(s.begin(), s.end(), '+'),s.end());
    
    // string ns = "",ans = "";

    //     for(int i=0; i<n; ){
    //         ns += s[i];
    //         i += 2;
    //     }

        sort(s.begin(), s.end());

        for(int i=0; i<s.size()-1; i++ ){
            // ans += ns[i]+'+';
            // i += 2;
            cout << s[i] << "+";
        }

        //ans.erase(ans.end()+0);

        cout << s[s.size()-1];

    
}