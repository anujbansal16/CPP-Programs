#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define scand(n) scanf("%d",&n)
int main(){
    int n,count=1,wt;
    scand(n);
    int a[n];
    rep(i,0,n)
        scand(a[i]);
    sort(a,a+n);
    wt=a[0]+4;
    rep(i,0,n){
        if(a[i]>wt){
            count++;
            wt=a[i]+4;}
    }
    cout<<count;       
return 0;    
}
