#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[10005];
    set<int> s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    cout << s.size() << endl;

    return 0;

}