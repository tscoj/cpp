#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, m;
    cin >> n;
    vector<int>a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m;

    bool result = false;
    for(int i = 1; i <= n; i++){
        if(a[i] == m){
            result = true;
        }
    }

    if(result) cout << "Happy";
    else cout << "Sad";
    cout << endl;

    return 0;
}