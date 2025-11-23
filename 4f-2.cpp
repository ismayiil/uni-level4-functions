#include <bits/stdc++.h>

using namespace std;
int numOfdig(int n){
    if(n == 0) return 1;
    n = abs(n);
    int ans = 0;
    while(n){
        ++ans;
        n /= 10;
    }
    return ans;
}

int main(){

    int n; cin >> n;
    cout << numOfdig(n);
    
}