// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll tc;
	cin>>tc;
	while(tc--){
		ll n,k;
		cin>>n>>k;
		if(n%2==k%2 && k*k<=n){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
}
