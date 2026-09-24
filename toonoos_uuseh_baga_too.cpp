#include<bits/stdc++.h>
using namespace std;
int main () {
    int i = 0, n, a[1005], x;
    cin >> n;

    while(n > 0){
        i++;
        x = n % 10;

        if(x == 9) x = 6;

        a[i] = x;
        n = n / 10;
    }

    sort(a + 1, a + i + 1);
    if(a[1] == 0){
        for(int j = 2; i <= i; j++){
            if(a[i] != 0) swap(a[1], a[j]);
        }
    }

    for(int j = 1; j <= i; j++){
        
        cout << a[j];
    }

    return 0;
}