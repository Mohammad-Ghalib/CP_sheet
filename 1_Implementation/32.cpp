#include<bits/stdc++.h>
using namespace std;

int main(){
    int k; cin >> k;
    string s, ans; cin >> s;

    int arr[26] ={0};
    bool b = true;
    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        //arr[s[i]-'a']++;
        //cout << arr[i] << " ";
    }

    for(int i=0; i<26 && b; i++){
        if(arr[i]%k != 0) b = false;
        else{
            for(int j=0; j<arr[i]/k; j++) ans += ('a' + i);
        }
    }

    if(b){
        for(int i=0; i<k; i++) cout << ans;
    } 
    else cout << -1;
}