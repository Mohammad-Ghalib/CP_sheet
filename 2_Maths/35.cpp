#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s; cin >> s;
    int count = 0;
    if(s=="1"){
        cout << count;
        return 0;
    }
    else count++;

    bool b = false;

    for(int i=1; i<s.size(); i++){

        if(!b && s[i] == '1') b = true;

        if(i%2 == 0) count++;
    }

    if(b ||(s.size()%2)==0 ) cout << count;
    else cout << count - 1;

}