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
typedef long long ll;
typedef long  l;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int inf=0x3f3f3f3f;
const int mo=1000000007;
const int ne=-1111;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
//*******************************************


int main(){
	int n,k,x=0,temp;
	scandd(n,k);
	int a[n];
	temp=n;
	map <int,int> hash;
	rep(i,0,n){
		scand(a[i]);
		hash[a[i]]=i;
	}
	while((k--&&n)){
		if(hash[a[x]]==hash[n]) k++;
		else{
			a[hash[n]]=a[x];
			hash[a[x]]=hash[n];
			a[x]=n;	
			}
		x++;n--;
	}
	rep(i,0,temp)
		cout<<a[i]<<" ";
return 0;	
}
