#include<bits/stdc++.h>
using namespace std;
int main () {
    int a[105], n, count = 0;
    vector<int> v;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(a[i] > 80) cout << a[i] << " ";
        if(a[i] < 80) v.push_back(a[i]);
   
    }

    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}