#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0, sub = 1, add = 2; cin >> n;

    //if(n==1) cout << 1;
    //else{

    while(n>0){
        count++;
        n -= sub;
        //cout << n << " ";
        sub += add;
        add++; 
    }

    if(n<0) cout << count-1;
    else cout << count;

    //}
}