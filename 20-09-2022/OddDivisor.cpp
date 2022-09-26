// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
		long long a;
		cin>>a;
		if(floor(log2(a))==ceil(log2(a)))
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
