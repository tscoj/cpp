#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, k, c, a[10000000], count;
    cin >> n >> k >> c;

    for(int i = k; i >= 1; i--){
        for(int j = 1; j <= c; j++){
        
        if(n >= i){
            n = n - i;
            count++;
        }
    }
    }
    
    cout << count;
    return 0;
}