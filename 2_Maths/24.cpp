#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    //int t; cin >> t;
    //while(t--){
        ll x,y,z;  cin >> x >> y >> z;
        if( (x%z == 0) || (y%z == 0)){
            cout << (x/z + y/z) << " " << 0 ;
        }
        else{

            ll req = std::min( (z-(x%z)), (z-(y%z)) );
            ll has = std::max( (x%z), (y%z) );

            if( (z-(x%z)) >= (z-(y%z)) ){
                if( (x%z) >= (z-(y%z)) ){
                    cout << ((x+y)/z) << " " << (z-(y%z));
                }
                else cout << (x/z + y/z) << " " << 0 ;
            }
            else if( (z-(x%z)) < (z-(y%z)) ){
                if( (z-(x%z)) <= (y%z) ){
                    cout << ((x+y)/z) << " " << (z-(x%z));
                }
                else cout << (x/z + y/z) << " " << 0 ;
            }
            else{
                cout << (x/z + y/z) << " " << 0 ;
            }



            // if(has >= req){
            //     cout << ((x+y)/z) << " " << req ;
            // }
            // else{
            //     cout << (x/z + y/z) << " " << 0 ;
            // }

        }
    //}
}