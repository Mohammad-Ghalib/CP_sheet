#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;  cin >> s;

    char c = s[0];
    s.erase(s.begin()+0);
    putchar(toupper(c));

    // if(s[0] >= 65 && s[0] <=97){
    //     s[0] -= 32;
    // }

    cout << s;
}