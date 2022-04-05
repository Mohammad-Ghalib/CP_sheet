#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, s[5];
    bool b = false;
    cin >> str;
    for(int i=0; i<5; i++){
        cin >> s[i];

        if( (s[i][0] == str[0]) || (s[i][1] == str[1]) ) b = true;
    }

    if(b) cout << "YES";
    else  cout << "NO";
}