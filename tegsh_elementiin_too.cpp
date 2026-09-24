#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[100000], count = 0;
    cin >> n;
    bool yeah = false;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 0) count++;
    }

    if(count > 0) cout << count;
    else cout << "No";

    cout << endl;

    return 0;
}