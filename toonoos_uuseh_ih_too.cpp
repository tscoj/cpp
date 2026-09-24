#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i = 0;
    int x, a[10005];
    while(n > 0){
        i++;
        x = n % 10;
        if(x == 6) x = 9;
        a[i] = x;
        n = n / 10;
    }
    
    sort(a + 1, a + i + 1, greater<int>());

    for(int j = 1; j <= i; j++){
        cout << a[j];
    }

    cout << endl;
    return 0;
}