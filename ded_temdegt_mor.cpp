#include<bits/stdc++.h>
using namespace std;

int main () {
    int count = 0;
    string s, a;

    cin >> s;
    cin >> a;

    for(int i = 0; i <= s.size() - a.size(); i++){
        int temp = 0;

        for(int j = 0; j < a.size(); j++){
            if(a[j] == s[i+j])
                temp++;
        }

        if(temp == a.size()){
            count++;
            i = i + a.size() - 1;
        }
    }

    cout << count;

    return 0;
}