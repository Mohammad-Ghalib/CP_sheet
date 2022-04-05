#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n], min=INT_MAX, max=INT_MIN, minIn=0, maxIn=0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIn = i;
        }

        if(arr[i] <=min){
            min = arr[i];
            minIn = i;
        }
    }

    if(maxIn > minIn){
        cout << maxIn + n - minIn - 2;
    }
    else{
        cout << maxIn + n - minIn - 1;
    }
}