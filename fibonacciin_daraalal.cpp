#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    a[1] = 1;
    if(n >= 2) a[2] = 1;
    for(int i = 3; i <= n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}