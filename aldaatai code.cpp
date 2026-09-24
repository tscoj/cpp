// ?????????? ?????? ???????? ???
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c;
    d = (a + b) % (c + 1);
    d = d + (a - b);
    e = 10 * d % (c + 2);
    cout << d << " " << e << endl;
    return 0;
}