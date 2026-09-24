#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[1005];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int yeah = true;
    for(int i = 1; i <= n/2; i++){
        if(a[i] != a[n - i + 1]) yeah = false;
    }

    if(!yeah) cout << "No";
    else cout << "YES";

    return 0;
}