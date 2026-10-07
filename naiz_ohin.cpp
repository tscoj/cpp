#include<bits/stdc++.h>
using namespace std;
int main () {
    string s, a;
    int c, b;
    cin >> s;
    cin >> a;

    int count = 0;
    int cnt = 0;
    for(int i = 0; i <= s.size(); i++){
        count = count + int(s[i]);
    }

    for(int i = 0; i <= a.size(); i++){
        cnt = cnt + int(a[i]);
    }

    if(count > cnt) cout << "Erkhem";
    else if(count < cnt) cout << "Ermuun";
    else cout << "Tentsuu";

    return 0;
}