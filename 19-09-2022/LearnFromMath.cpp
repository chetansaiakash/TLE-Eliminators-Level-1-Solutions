// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int MAX=1e6+10;
vector<bool> prime(MAX,1);
int main() {
	
	prime[0]=prime[1]=false;
	for(int i=2;i<MAX;i++){
		for(int j=2*i;j<MAX;j+=i)
		  prime[j]=false;
	}
    int num;
	cin>>num;
	int i;
	int j;
	for(i=4;i<=num/2;i++){
		if(!(prime[i])){
			j=num-i;
		}
		if(!(prime[i]) && !(prime[j])){
			break;
		}
		
	}
	cout<<i<<" "<<j;
	
}
