#include<bits/stdc++.h>
using namespace std;
int main () {
    string a, s;
    cin >> a;
    cin >> s;

    sort(a.begin(), a.end());
    sort(s.begin(), s.end());

    if(a == s) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}