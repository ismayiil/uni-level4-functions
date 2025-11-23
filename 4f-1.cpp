#include <bits/stdc++.h>

using namespace std;

int sqsum(int n){
    int sum = 0;
    for(int i = 0; i <= n; i+=2) sum += i * i;
    return sum;
}

int main(){

    int n; cin >> n;
    cout << sqsum(n);

}