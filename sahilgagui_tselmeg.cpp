#include<bits/stdc++.h>
using namespace std;
int main () {
    int  n, m;
    vector<int> a;
    vector<int> b;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i] == b[j]){
                a.pop_back(a[i]);
            } 
        }
    }

    cout << a.size() << endl;
    for(int i = 1; i <= a.size(); i++){
        cout << a[i] << " ";
    }
}
