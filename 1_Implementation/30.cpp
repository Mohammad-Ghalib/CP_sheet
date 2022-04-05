#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];

        if(n==2){
            cout << 2 <<"\n" << 1 << " " << 2 <<"\n";
            continue;
        }

        for(int i=0; i<n; i++) arr[i] = i+1;

        cout << 2 <<"\n" << arr[n-3] << " " << arr[n-1] <<"\n";
        arr[n-3] = ceil((arr[n-1] + arr[n-3])/2);
        int k = n-1;

        while(k>1){
            cout << arr[k-1] << " " << arr[k-2] <<"\n";
            arr[k-2] = ceil((arr[k-1] + arr[k-2])/2);
            k--;
        }
        

    }
}