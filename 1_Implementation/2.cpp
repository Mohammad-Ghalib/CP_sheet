#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, ans=0;  cin >> n;
    stack<int> s;

    while(n){
        s.push(n%10);
        n /= 10;
    }

    ans = s.top();
    s.pop();

    if(ans>4 && ans<9){
        ans = 9 - ans;
    }

    while(!s.empty()){

        // long long int x = s.top();
        // s.pop();

        // if((s.empty()) && (x==9)){
        //     ans += ans
        // } 

        if(s.top()>4){
            ans = ans*10 + 9 - s.top();
            s.pop();
        }
        else{
            ans = ans*10 + s.top();
            s.pop();
        }
    }

    cout << ans;

}