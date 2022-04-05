#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b;  cin >> a >> b;

    double ans = (double)log10(b/a)/(double)log10(1.5);

    if(ans - (int)ans == 0){
        cout << (int)ans + 1;
    }
    else{
        cout << ceil(ans);
    }

    //cout << b/a;
}