#include <iostream>
using namespace std;

int main() {
    long long a, n;
    cin >> a >> n;

    long long t = 0;
    long long c = a; 

    for (int i = 1; i <= n; i++) {
        t += c;      
        c *= 2;         
    }

    cout << t << endl;
    return 0;
}
