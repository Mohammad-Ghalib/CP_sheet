#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ans=0,count=0, i=1,num; cin >> n;
        num = n%10;

        while(n>0){
            n /= 10;
            count += i;
            i++;
        }

        //count = log10(n);
        // if(count = 2) count++;
        // else if(count = 3) count += 3;
        // else if(count = 4) count += 6;
        ans = (10*(num-1)) + count;
        cout << ans <<"\n";

    }
}