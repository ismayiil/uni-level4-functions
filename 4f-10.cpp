#include <bits/stdc++.h>
//same as 4-3 in level4
using namespace std;

bool prime(int n){
    if(n == 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){

    int n; cin >> n;
    if(n >= 2) cout << 2;
    for(int i = 3; i < n; i+=2){
        if(prime(i)) cout << ' ' << i;
    }
    
}