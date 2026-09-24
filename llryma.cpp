#include <bits/stdc++.h>
using namespace std;
long long a,b,k=0;
bool isPalindrome(const string&s){
    int n=s.size();
    for(int i=0;i<n/2;i++) if(s[i]!=s[n-1-i]) return false;
    return true;
}
bool fp(long long x){
    string s=to_string(x);
    int n=s.size();
    if(isPalindrome(s)) return false;
    for(int i=0;i<n;i++){
        if(i+1<n&&s[i]==s[i+1]) return false;
        if(i+2<n&&s[i]==s[i+2]) return false;
    }
    return true;
}
int main(){
    cin>>a>>b;
    if(b-a<=1000000){
        for(long long i=a;i<=b;i++) if(fp(i)) k++;
        cout<<k<<"\n";
    }else{
    	cout<<"utga cn heterce bro";
	}
}