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
	int n,m,count=0,left,top,right,bottom;
	scandd(n,m);
	int a[n][m];
	rep(i,0,n)
		rep(j,0,m)
			scand(a[i][j]);
	left=0;
	top=0;
	right=m-1;
	bottom=n-1;
	
	while(true){
		for(int i=left;i<=right;i++){count++;
			cout<<a[top][i]<<" ";}
		if(count==n*m) break;
		for(int i=top+1;i<=bottom;i++){count++;
			cout<<a[i][right]<<" ";}
		if(count==n*m) break;
		for(int i=right-1;i>=left;i--){count++;
			cout<<a[bottom][i]<<" ";}
		if(count==n*m) break;
		for(int i=bottom-1;i>top;i--){count++;
			cout<<a[i][left]<<" " ;}
		if(count==n*m) break;
		left++;
		right--;
		top++;
		bottom--;		
	}
			
return 0;	
}
