#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, a;
    cin >> s;

    for(int i = s.size() - 1; i >= 0; i--){
        a = a + s[i];
    }

    cout << s << a;
}