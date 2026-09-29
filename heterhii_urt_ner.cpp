#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    if(s.size() < 10) {
        cout << s;
    }
    else {
        cout << s.front() << s.size() << s.back();
    } 

    cout << endl;
      return 0;
}