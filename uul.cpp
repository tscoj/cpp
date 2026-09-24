#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, peak = 0, bottom = 0, a[200009];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 2; i <= n - 1; i++){
        if(a[i] > a[i - 1] && a[i] > a[i + 1]) peak++;
        if(a[i] < a[i - 1] && a[i] < a[i + 1]) bottom++;
    }

    cout << peak << " " << bottom;
    cout << endl;

    return 0;
}