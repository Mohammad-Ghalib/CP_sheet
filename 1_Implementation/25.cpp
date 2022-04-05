#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans = 0;
        vector<int> pos;

        if(s.size() == 1){
            cout << 0 << "\n";
            continue;
        }

        for(int i=0; i<s.size(); i++){
            if(s[i] == '1') pos.push_back(i);
        }

        if( (pos.size() == 0) || (pos.size() == s.size()) ){
            cout << 0 << "\n";
            continue;           
        }



        for(int i=0; i<pos.size()-1; i++){
            if(pos[i+1] - pos[i] != 1){
                ans += pos[i+1] - pos[i] -1;
            }
        }

        cout << ans << "\n";


    }
}