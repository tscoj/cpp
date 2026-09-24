#include<bits/stdc++.h>
using namespace std;
int a[1000000],j,savniagouwgae,c;
string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	getline(cin, s);
	for (int i = 0; i + 3 < s.size(); i++) {
    if (s[i] == 'U' && s[i+1] == 'B' && s[i+2] == 'I' && s[i+3] == 'S') {
    	c++;
    	a[c]=i + 1;
    }
}	cout<<c<<endl;
for(int j=1;j<=c;j++){
	cout<<a[j] << " ";

}}