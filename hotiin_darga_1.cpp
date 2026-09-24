#include<bits/stdc++.h>
using namespace std;
int main () {
    int a[1000000], n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int ondor = 0;
    for(int i = 1; i <= n; i++){
       
        if(a[i] > ondor) cout << i << " ";
        ondor = max(ondor,a[i]);
    }

    return 0;
}