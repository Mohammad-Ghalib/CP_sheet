#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;  cin >> m >> n;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i%2 == 0) cout << "#";
            else{
                if((i%4 == 1) && (j==n-1)) cout << "#";
                else if((i%4 == 3) && (j==0)) cout << "#";
                else cout << ".";
            }
        }
        cout << "\n";
    }
}