#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[11][11], k = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            k++;
            a[i][j] = k;
        }
    }
    for(int i=1;i<=n;i++){
            for (int j = n; j >= 1; j--) {
                cout << setw(3) << a[i][j];
				
            }cout << '\n';
        }
        
    }
