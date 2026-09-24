#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, s = 0, a[1000000];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s = s + a[i];
    }

    cout << s << endl;
}