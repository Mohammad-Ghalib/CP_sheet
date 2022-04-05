#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int k = ceil(log10(n));

        if(log10(n) == k) k++;
        
        int mul=1, arr[k] = {0}, index=0, count=k;
        //cout << k <<"\n";

        for(int i=0; i<count; i++){
            int a = n%10;
            if(a>0){
                arr[index] = a*mul;
                index++;
            }
            else k--;
            n /= 10;
            mul *= 10;
            
        }

        cout << k <<"\n";
        // int i = 0
        // while(index >=0){
        //     cout << arr[index] << " ";
        //     index--;
        // }

        for(int i=0; i<count; i++){
            if(arr[i] > 0){
                cout << arr[i] << " ";
            }
        }

        cout << "\n";
    }
}