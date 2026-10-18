#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    for(int i = 2; i <= sqrt(n); i++){
        int p = 1;
        while(pow(i, p) <= n){
            if(pow(i, p) == n){
                cout << i << " " << p;
                return 0;
            }
            p++;
        }
    }

    cout << n << " " << 1;
    return 0;
}