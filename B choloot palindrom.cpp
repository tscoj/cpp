#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cholootpalindrom(int x) {
    string s=to_string(x);
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) return false;
    }
    for(int i=0;i<n-2;i++){
        if(s[i]==s[i+2]) return false;
    }
    return true;
}
int main() {
    int a,b;
    cin>>a>>b;
    int k=0;
    for (long long x=a;x<=b;x++) {
        if (cholootpalindrom(x) == 1) k++;
    }
    cout << k << "\n";
}