#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,d,count=0; cin >> n >> m;
    if(n == m) cout << 0;
    else if(m%n != 0) cout << -1;
    else{
        d = m/n;
        while(d%3 == 0){
            //if(d%3 == 0){
                d /= 3;
                count++;
            //}
        }
        
        while(d%2 == 0){
            //if(d%2 == 0){
                d /= 2;
                count++;
            //}
        }

        if(d==1) cout << count;
        else cout << -1;
    }
}