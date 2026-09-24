#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, a[105];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    bool yeah = true;
    while(yeah){
        yeah = false;

        for(int i = 1; i <= n - 1; i++){
            if(a[i] != a[i + 1] && a[i] % a[i + 1] == 0){
                swap(a[i], a[i + 1]);
                yeah = true;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}