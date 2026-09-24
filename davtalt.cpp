#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,count,l,a[10],p,i,j;
    cin>>n;
    int c=0;
        s=0;l=0;i=0;

	while(n>0){
	a[i++]=n%10;
	n=n/10;
}
	sort(a,a+i,greater<int>());
	for(j=0;j<i;j++){
		s=s*10+a[j];
	}
	sort(a,a+i);
	for(j=0;j<i;j++){
		l=l*10+a[j];
	}


        for(j=0;j<i;j++)l=l*10+a[j];
        p=s-l;
        n=p;
		c++;
      while(p!=6174);
    cout<<c<<endl;
    return 0;
    }