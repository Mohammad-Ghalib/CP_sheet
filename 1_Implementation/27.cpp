#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,ans=0; cin >> n >> m;
        char arr[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                cin >> arr[i][j];
                if( (i==n-1) && (arr[i][j] == 'D')) ans++;
                if( (j==m-1) && (arr[i][j] == 'R')) ans++;
            }
        }

        cout << ans << "\n";

    }
}