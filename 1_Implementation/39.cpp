#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s,k;  cin >> s;
    k=s;
    bool b = true;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    //cout << s << "  ";
    if(s==k){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //char ch = toupper(s[0]);
        //s[0] = ch;
        cout << s;
        b = false;
    }

    char c = tolower(s[0]);
    s[0] = c;
    //cout << s << "  ";
    if(s==k){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        char ch = toupper(s[0]);
        s[0] = ch;
        cout << s;
        b = false;
    }

    if(b) cout << k;

    



}