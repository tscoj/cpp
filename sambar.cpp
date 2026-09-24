#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int tselmeg = 0, tsengel = 0;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit < 5) {
                tselmeg++;
            } else {
                tsengel++;
            }
            temp /= 10;
        }
    }

    cout << tselmeg << " " << tsengel;
    return 0;
}