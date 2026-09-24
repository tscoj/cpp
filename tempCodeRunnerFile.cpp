#include<bits/stdc++.h>
using namespace std;

int main () {
    int a[1000000], n, count = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a + 1, a + n + 1, greater<int>());

    for(int i = 2; i <= n; i++){
        if(a[1] == a[i]){
            count++;
        }
    }

    cout << count + 1 << endl;
}