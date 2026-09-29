#include<bits/stdc++.h>
using namespace std;
int main (){
    char s1, s2;
    cin >> s1 >> s2;

    if(s1 >= 'A' && s1 <= 'Z') cout << (int)s1 << " ";
    else cout << s1 << " ";

    if(s2 >= 'A' && s2 <= 'Z') cout << (int)s2;
    else cout << s2;
}