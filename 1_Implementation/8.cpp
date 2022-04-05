#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    vector<string> v;
    long long faces = 0;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(int i=0; i<n; i++){
        if(v[i] == "Tetrahedron") faces += 4;
        if(v[i] == "Cube") faces += 6;
        if(v[i] == "Octahedron") faces += 8;
        if(v[i] == "Dodecahedron") faces += 12;
        if(v[i] == "Icosahedron") faces += 20;
    }

    cout << faces;
}