#include <bits/stdc++.h>
//same as 4-9 in level4
using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)

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

    fi(1,1001){
        if(palindrome(i)) cout << i << ' ';
    }
    
}