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
<<<<<<< HEAD
    }                                  
=======
    }          
 cout<<"Test1";                       
>>>>>>> 6a61751a868e21e21887c238015e15986383016e
cout<<count;                        
return 0;    
}

