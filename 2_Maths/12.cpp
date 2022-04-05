#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n],ce=0, co=0, c=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];

            if(arr[i]%2 == 0){
                ce++;
                if(i%2 == 0) c++;
            }
            else{
                co++;
                if(i%2 == 1) c++;
            }

        }

        if( (ce == (n+1)/2) && (co == n/2)){
            cout << (n-c)/2 << "\n";
        }
        else cout << -1 << "\n";
    }
}