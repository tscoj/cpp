#include<bits/stdc++.h>
using namespace std;
long long a[1001],i,n;
int main () {
	cin >> n;
    
    a[0] = 1;
    a[1] = 1;

    for(int i=1;2*i<= n; i++) {
        a[2*i]=a[i]+1;
        if(2*i+1<=n) 
            a[2*i+1]=a[2*i]-a[i];
        }
		cout<<a[n]<<endl;
   return 0;

    }
   
