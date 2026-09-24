#include<bits/stdc++.h>
#include <cctype> 
using namespace std;
vector<int> e;
int main () {
	long long n,i;
	int a[1000000];
	cin>>n;
	while(n>0){
		i++;
		a[i]=n%10;
		e.push_back(a[i]);
		n=n/10;
	}
	sort(digits.begin(),digits.end,greater<int>());
	long long result = 0;
    for (int j=1;j<=i;J++) {
        result = result * 10 + d;
    }
    cout<<result<<endl;
    return 0;
}
}
