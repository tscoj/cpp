#include<bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main () {
    cin >> a >> b >> c >> d;
    
    int s = a + b + c + d;
    
    int d1 = abs(s - 2*a);
    int d2 = abs(s - 2*b);
    int d3 = abs(s - 2*c);
    int d4 = abs(s - 2*d);
    int d5 = abs(s - 2*(a+b));
    int d6 = abs(s - 2*(a+c));
    int d7 = abs(s - 2*(a+d)); 
    
    cout << min({d1, d2, d3 ,d4 ,d5 ,d6, d7});
}