#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[200];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int cur_len = 1, cur_start = 1;
    int best_len = 1, best_start = 1;

    for(int i = 2; i <= n; i++){
        if(a[i] <= a[i - 1]) {
            cur_len++;
        } else {
            cur_start = i;
            cur_len = 1;
        }
        if(cur_len > best_len){
            best_len = cur_len;
            best_start = cur_start;
        }
    }

    cout << best_len << endl;
    for(int i = best_start; i < best_start + best_len; i++){
        cout << a[i] << " ";
    }
cout << endl;
    return 0;
}