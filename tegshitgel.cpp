#include<bits/stdc++.h>
using namespace std;

int main () {
    int ans = 0, n, a, b;
    cin >> n >> a >> b;

    for(int x = 0; x <= n; x++){
        int ax = a * x;
        for(int y = 0; y <= n - ax; y++){
            if(n == x * a + y * b){
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}