#include <bits/stdc++.h>
//similar to 4-15 in level4
using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()
void hell(){
    int n;
    int mx = -2e9;
    while(cin >> n){
        if(n == 0){cout << mx; return;}
        mx = max(mx, n);
    }
}

signed main(){

    hell();
}