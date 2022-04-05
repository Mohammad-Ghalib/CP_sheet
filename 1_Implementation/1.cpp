#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0; cin >> n;
    string s[n], sp="++";

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    for(int i=0; i<n; i++){

        if(s[i].find(sp) != std::string::npos){
            x++;
        }
        else{
            x--;
        }

    }

    cout << x;

}