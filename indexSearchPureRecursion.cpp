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
#define scanc(n) scanf("%c",&n)
#define scanl(n) scanf("%ld",&n)
#define scandd(n,m) scanf("%d%d",&n,&m)
#define scanc(n) scanf("%c",&n)
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int inf=0x3f3f3f3f;
const int mo=1000000007;
const int ne=-1111;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
//*******************************************

int allIndexes(int input[], int size, int x, int output[]) {
		static int pos=0;
		if(size==0)
			return -1;
		else if(input[size-sizeof(input)/sizeof(input[0])]==x)
			output[pos++]=size-sizeof(input)/sizeof(input[0]);
		return allIndexes(input,size-1,1,output);
}
int main(){
	int a[]={2,1,4,5,1};
	int output[sizeof(a)/sizeof(a[0])];
	memset(output,-1,sizeof(output));
	allIndexes(a, sizeof(a)/sizeof(a[0]), 1, output) ;
	rep(i,0,5){
		cout<<output[i]<<"\n";
	}
}
