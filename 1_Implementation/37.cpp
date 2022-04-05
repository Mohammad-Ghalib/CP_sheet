#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m; cin >> n >> m;
    //bool b = false;
    int l = (n+1)/2, h = n;
    //cout << l << " ";

    if((m>h)) cout << -1;
    else{
        //cout << l+(l%m);
        for(int i=l; i<=h; i++){
            if(i%m == 0) {
                cout << i;
                break;
            }
        }
    }


}