#include<bits/stdc++.h>
using namespace std;
int main () {
	int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;
    
    if(max({a1, a2, a3}) <= min({b1, b2, b3})){
    	
    	cout << "3";
	}
	else if ((max(a1, a2) <= min(b1, b2)) || (max(a1, a3) <= min(b1, b3)) || (max(a2, a3) <= min(b2, b3))) {
        cout << 2;
    }
    else cout << 1;
    
    return 0;
}