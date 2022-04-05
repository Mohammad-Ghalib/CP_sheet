#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n,l; cin >> n;
        l = 2*n;
        int arr[l];
        for(int i=0; i<l; i++) cin >> arr[i];
        sort(arr, arr+l);

        cout << arr[l/2] - arr[l/2 - 1] << "\n";
        
    }
}