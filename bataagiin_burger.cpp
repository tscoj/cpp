#include<bits/stdc++.h>
using namespace std;
int main (){
    int a, b, c, cnt;
    cin >> a >> b >> c;

    cnt = min((a / 2), min(c, b));

    cout << cnt;
    return 0;
}
