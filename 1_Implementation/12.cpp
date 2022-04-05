#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, count=0; cin >> n;

    while(n > 0){
        int a = n%10;
        if( (a==4)||(a==7) ) count++;
        n /= 10;
    }

    if( (count==4)||(count==7) ) cout << "YES";
    else cout << "NO";    
}