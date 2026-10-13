#include<bits/stdc++.h>
using namespace std;
int main () {
    string a, b;
    
    cin >> a;
    cin >> b;
    vector<int> s;

    int mx = max(a.size(), b.size());
   int  mn = min(a.size(), b.size());

    for(int i = mx; i > mn - 1; i--){
        s[i + 1] = a[i] + b[i];
        if(s[i + 1] > 9){
            s[i] += 1;
        }
    }

    if(mx + 1 == s.size()){
        for(int i = 0; i < mx; i++){
            cout << s[i];
        }
    }
    else{ 
        for(int i = 1; i < mx; i++){
        cout << s[i];
        }
    }
    return 0;
}