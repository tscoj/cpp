#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a;
    cin >> n;
    vector<int> male, fmale;
   
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(a % 2 == 0) {
            male.push_back(a);
        }
        else {
            fmale.push_back(a);
        }
    }

    sort(male.begin(), male.end());
    sort(fmale.begin(), fmale.end(), greater<int>());

    for(int i = 1; i <= male.size(); i++){
        cout << male[i] << " ";
    }
    for(int i = 1; i <+ fmale.size(); i++){
        cout << fmale[i] << " ";
    }

    cout << endl;
    return 0;
}