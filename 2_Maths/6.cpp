#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--){
        int x,y,z; cin >> x >> y >> z;

        if((x==y) && (y==z)){
            cout << "YES\n" << x << " " << y << " " << z << "\n";
        }
        else if((x!=y) && (y!=z) && (x!=z)) cout << "NO\n";
        else{
            if( ((x==y) && (z>x)) || ((z==y) && (x>z)) || ((x==z) && (y>x)) ){
                cout << "NO\n";
            }
            else{
                if(x==y){
                    cout << "YES\n" << x << " " << z << " " << z << "\n";
                }
                else if(x==z){
                    cout << "YES\n" << x << " " << y << " " << y << "\n";
                }
                else if(z==y){
                    cout << "YES\n" << z << " " << x << " " << x << "\n";
                }
            }
        }
    }

}