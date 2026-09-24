#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    string s;
    for (long long i = n; i <= m; i++) {
        s += to_string(i);
    }
    vector<int> digits;
    for (char c : s) {
        digits.push_back(c - '0');
    }
    sort(digits.rbegin(),digits.rend());
    if (k>digits.size()) {
        cout<<-1<<"\n";
    }else{
        cout<<digits[k-1]<<"\n"; 
    }
    return 0;
}