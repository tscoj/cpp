#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;

    int egshig = 0, giig = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')    egshig++;
        else giig++;
    }

    cout << max(giig, egshig) - min(giig, egshig);
    return 0;
}