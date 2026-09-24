#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[1000];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int maxn = a[1];
    int burmaxn = a[1];
    for(int i = 2; i <= n; i++){
        maxn = max(a[i], maxn + a[i]);

        burmaxn = max(burmaxn, maxn);
    }

    cout << burmaxn << endl;

    return 0;
}