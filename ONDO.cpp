#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a[1000000], count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];

        if(a[i] % 2 == 1) count++;
    }

    if(count == 1){
        for(int i = 1; i <= n; i++){
            if(a[i] % 2 == 1){
                cout << i << endl;
            }
        }
    }
    else{
        for(int i = 1; i <= n; i++){
            if(a[i] % 2 == 0){
                cout << i << endl;
            }
        }
    }

    return 0;
}