#include <bits/stdc++.h>
//same as 4-14 in level4
using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()

bool palindrome(int i){
    int ters = 0, c = i;
    while(c){
        ters = ters * 10 + c % 10;
        c /= 10;
    }
    if(i == ters) return 1;
    return 0;
}

signed main(){

    // Palindrome?

    int n; cin >> n;
    if(palindrome(n)) cout << "tersi ozune beraberdir";
    else cout << "tersi ona = deyil";
    
}