#include<bits/stdc++.h>
using namespace std;
int n,m;

int main () {
cin >> n >> m;
int balance[101] = {0}; //
for (int i = 0; i < m; i++) {
int a, b, c;
cin >> a >> b >> c;
balance[a] -= c; //
balance[b] += c; // b
}

int result = 0;
for (int i = 1; i <= n; i++) {
if (balance[i] < 0) {
result += -balance[i];
}
}

cout << result << endl;
return 0;
}