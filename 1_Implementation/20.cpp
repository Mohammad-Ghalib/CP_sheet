#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int a,b,n,index=0;  cin >> a >> b >> n;

        while(a<=n && b<=n){

            // if((a+b) > n){
            //     index++;
            //     break;
            // }

            if(a<b) a += b;
            else b += a;
            //cout << a <<"  " << b << "\n";
            index++;
        }
        //cout <<"\n";

        cout << index << "\n";
    }
}