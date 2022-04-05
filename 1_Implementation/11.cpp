#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n+1], newArr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        newArr[arr[i]] = i; 
    }

    for(int i=1; i<=n; i++){
        cout << newArr[i] << " ";
    }


}