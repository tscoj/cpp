#include<bits/stdc++.h>
using namespace std;
int a[10000000000],j,c;
string s;
int main (){
	cin>>s;
	for (int i = 0; i + 3 < s.size(); i++) {
    if (s[i] == 'U' && s[i+1] == 'B' && s[i+2] == 'I' && s[i+3] == 'S') {
    	c++;
    	a[c]=i;
    }
}	cout<<c<<endl;
//for(int j=1;j<c;j++){
//	cout<<
}