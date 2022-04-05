#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    bool easy = true;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            easy = false;
        }
    }

    if(easy) cout << "EASY";
    else cout << "HARD";
}