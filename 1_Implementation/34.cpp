#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,s; cin >> n;
    for(i = 1; i <= n; i++){
        //for loop for displaying space
        for(s = i; s < n; s++) cout << " ";

        //for loop to display star equal to row number
        for(j = 1; j <= i; j++) cout << j-1 << " ";

        for(j; j>0; j--) cout << j-1 << " ";
    
        // ending line after each row
        cout << "\n";
    }

    for(i = n-1; i >= 1; i--){
        //for loop for displaying space
        for(s = i; s < n; s++) cout << " ";

        //for loop to display star equal to row number
        for(j = 1; j <= (2 * i - 1); j++) cout << "*";
    
        // ending line after each row
        cout << "\n";
    }
    
}