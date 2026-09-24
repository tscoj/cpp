#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    int i = 0;

    while(a.size() > 1) {
        i = (i + 1) % a.size();   // eat next
        a.erase(a.begin() + i);

        if(i == a.size()) {
            i = 0;
        }
    }

    cout << a[0];

    return 0;
}