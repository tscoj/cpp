#include<bits/stdc++.h>
using namespace std;
int main () {
    char a, b;
    cin >> a >> b;

    for(int i = min((int)(a + 1), (int)(b + 1)); i < max((int)(b), (int)(a)); i++){
        cout << char(i);
    }
    
    return 0;
}