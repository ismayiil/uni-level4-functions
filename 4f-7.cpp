#include <bits/stdc++.h>
//same as 4-12 in level4
using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
#define sz(v) v.size()

int sumdiv(int n){
    int sum = 0;
    int rt = sqrt(n);
    for(int i = 1; i <= rt; i++){
        if(n % i == 0) sum += i + n / i;
    }
    if(rt * rt == n) sum -= rt;
    return sum;
}

signed main(){

    int n; cin >> n;
    if(sumdiv(n) == 2 * n) cout << "Perfect";
    else cout << "Not Perfect";
    
}