#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N,fhwefurqfqhfgqh;
    cin >> N;
    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }
    long long cnt = 0;
    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            cnt++; 
            if (i != N / i) cnt++;
        }}
    cout << cnt << endl;
    return 0;
}
