#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[100000];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    sort(a + 1, a + n + 1);
    
    cout << a[1] << endl;

    return 0;
}