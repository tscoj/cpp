#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    int count = 0;
    cin >> s;
    
   for(int i = 0; i < s.size(); i++){
        if(s[i] > 'A' && s[i] < 'Z'){
            count++;
            break;
        }
   }

   for(int i = 0; i < s.size(); i++){
        if(s[i] > 'a' && s[i] < 'z'){
        count++;
        break;
        }
    }

    for(int i = 0; i <= s.size(); i++){
        if(s[i] < 'a' || s[i] > 'z' || s[i] < 'A' || s[i] > 'Z'){
            count++;
            break;
        }
    }

    if(s.size() >= 8)   count++;
    

    if(count == 4) cout << "Strong";
    if(count == 2 || count == 3) cout << "Good";
    if(count < 2) cout << "Bad";

    cout << endl;
    return 0;
}