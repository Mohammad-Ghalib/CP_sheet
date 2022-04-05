#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n/2];
        if(n%4 == 2) cout << "NO\n";
        else{
            cout << "YES\n";
            int index=0;
            for(int i=2; i<n; i += 2){
                cout << i << " ";
                arr[index] = i-1;
                index++;
            }

            cout << n << " ";
            arr[index] = (n/2)+n-1;

            for(int i=0; i<n/2; i++) cout << arr[i] <<" ";

            cout << "\n";
        }
    }
}