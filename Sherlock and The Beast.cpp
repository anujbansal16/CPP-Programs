#include<bits/stdc++.h>
using namespace std;
#define scand(n) scanf("%d",&n)
#define scanl(n) scanf("%ld",&n)
#define scandd(n,m) scanf("%d%d",&n,&m)
//*******************************************


int main(){
	int n,three=0,five=0,t;
	scand(t);
	while(t--){
		three=five=0;
		scand(n);
		if(!(n%3))
			five=n;
		else if(n%3==2){
			five=n-5;three=5;}
		else{
			five=n-10;three=10;}
		if(five<0)
			cout<<"-1\n";
		else{
			while(five--)
				cout<<"5";
			while(three--)
				cout<<"3";
			cout<<"\n";
		}
	}
	return 0;	
}
