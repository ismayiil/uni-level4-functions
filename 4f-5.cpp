#include <bits/stdc++.h>
//same as 4-7 in level4
using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)

int Arm(int n){
    int c = n;
    int sum = 0, req = 0;
    while(c){
        req++;
        c /= 10;
    }
    c = n;
    while(c){
        int q = c % 10;
        sum += pow(q,req);
        c /= 10;
    }
    return sum;
}

int main(){

    for(int i = 0; i <= 2e9; i++){
        if(Arm(i) == i) cout << i << ' ';
    }
    
}