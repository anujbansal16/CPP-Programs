#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define rep(i,a,n) for(int i=(a);i<(n);++i)
#define repj(j,a,n) for(int j=(a);j<(n);++j)
#define dep(i,a,n) for(int i=(a);i>=(n);--i)
#define eps 1e-8
#define pi 3.1415926535897
#define sqr(x) ((x)*(x))
#define CLR(a) memset(a,0,sizeof(a))
#define pw(x) ((ll(1))<<(x))
#define scand(n) scanf("%d",&n)
#define scanl(n) scanf("%ld",&n)
#define scandd(n,m) scanf("%d%d",&n,&m)
#define scanc(n) scanf("%c",&n)


int main(){
	string s1,s2;
	int f=0,s=0;
	cin>>s1>>s2;
	rep(i,0,s1.size())
		f+=((s1[i]=='(')?1:-1);
	rep(i,0,s2.size())
		s+=((s2[i]=='(')?1:-1);
	if(abs(f)==abs(s))
		cout<<"Balanced";
	else		
		cout<<"UnBalanced";	
	
		
		
return 0;	
}
