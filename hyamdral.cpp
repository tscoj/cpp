#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double discounted = b * 0.7; // 30% ???????
    if (a >= discounted) 
        cout << "Woooohoooo :D";
    else 
        cout << "sad ;(";
    
    return 0;
}
