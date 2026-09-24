#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> a(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    sort(a.begin() + 1, a.end());

    cout << a[a.size() - 1] << endl;
}