#include<bits/stdc++.h>
using namespace std;
int main (){
    string a, b;
    cin >> a;
    cin >> b;
    
    vector<int> s( a.size() + 1, 0);
    int mx = max(a.size(), b.size());
    int mn = min(a.size(), b.size());

    for(int i = mx - 1; i > mn; i--){
        s[i] = a[i] - b[i];

        if(s[i] < 0) {
            s[i] += 10;
            if(i > 0) a[i - 1]--;
        }
    }

    int i = 0;
    while(i < mx - 1 && s[i] == 0) i++;

    for(; i < mx; i++){
        cout << s[i];
    }

    cout << endl;
    return 0;
}