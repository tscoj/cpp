#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    char ch, temp = 'a';
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if((int)(s[i]) < (int)temp){
            cout << char((int)(s[i] + 32));
        }
        else {
            cout << s[i];
        }
    }

    return 0;
}