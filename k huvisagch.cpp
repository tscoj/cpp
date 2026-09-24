#include<bits/stdc++h
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c[100];
    for(int d=0;d<a;++d)cin>>c[d];
    int e[100][100],f[100]={0},g[100][100],h=0;
    for(int i=0;i<a/b;++i){
        int j=i*b,k=0;
        for(int l=0;l<h;++l){
            int m=1;
            for(int n=0;n<b;++n)
                if(c[j+n]!=g[l][n]){m=0;break;}
            if(m){f[l]++;k=1;break;}
        }
        if(!k){
            for(int n=0;n<b;++n)g[h][n]=c[j+n];
            f[h]=1;h++;
        }
    }
    int o=0;
    for(int i=1;i<h;++i)
        if(f[i]>f[o])o=i;

    int p=0;
    for(int i=0;i<a/b;++i){
        int j=i*b;
        for(int n=0;n<b;++n)
            if(c[j+n]!=g[o][n])p++;
    }

    cout<<p<<endl;
    return 0;
}