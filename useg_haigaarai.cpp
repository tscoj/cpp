#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, a;
    cin >> s >> a;

    if(a == "Ts" || a == "Ch" || a == "Sh" || a == "Kh") {
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == a[0] && s[i + 1] == a[1]) {
                cout << "YES";
                return 0;
            }
        }
    }
    else {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == a[0]) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}