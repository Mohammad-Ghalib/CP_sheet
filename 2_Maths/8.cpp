#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int a,b,c,n,m,rem;  cin >> a >> b >> c >> n;

        m = std::max(a,b);
        m = std::max(m,c);

        rem = (m-a)+(m-b)+(m-c);
        n -= rem;

        if( (n<0) || (n%3 != 0)) cout << "NO\n";
        else cout << "YES\n";       

    }

}