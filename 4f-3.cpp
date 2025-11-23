#include <bits/stdc++.h>

using namespace std;

int nsum(int n){
    int c = n;
    int sum = 0;
    while(c){
        sum += c % 10;
        c /= 10;
    }
    return sum;
}
void hell(){
    for(int i = 100; i <= 910; i++){
        if(nsum(i) == 10) cout << i << ' ';
    }
}
int main(){

    hell();
    
}