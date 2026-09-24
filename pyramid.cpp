#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
           
            for (int j = 1; j <= i; j++) {
                cout << x << " ";
                x++;
            }
        }
        else {
            int start = x + i - 1;

            for(int j = 1; j <= i; j++){
                cout << start << " ";
                start--;
            }
            x += i;
        }
        
        cout << '\n';
    }

    return 0;
}