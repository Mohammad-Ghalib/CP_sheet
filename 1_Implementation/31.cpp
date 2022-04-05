#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, last=0, sum=0; cin >> n;
    int arr[8];
    for(int i=1; i<=7; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] > 0) last = i;
    }

    n %= sum;
    if(n==0){
        cout << last;
        return 0;
    }

    for(int i=1; i<=7; i++){
        n -= arr[i];
        if(n <= 0){
            cout << i;
            break;
        }
    }
}