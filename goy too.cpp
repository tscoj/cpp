#include <iostream>
using namespace std;

int main() {
    long long A;
    cin >> A;

    long long ans = A - (A % 7);
    cout << ans << endl;

    return 0;
}
