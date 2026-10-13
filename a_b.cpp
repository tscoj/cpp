#include<bits/stdc++.h>
using namespace std;
int main () {
    string a, b;
    cin >> a;
    cin >> b;

    if(a.size() != b.size()){
        if(a.size() > b.size()) cout << "1";
        else cout << "2";

        return 0;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            cout << "1";
            return 0;
        }
        else if(a[i] < b[i]){
            cout << "2";
            return 0;
        }

     
    }
    cout << "0";
    return 0;
}