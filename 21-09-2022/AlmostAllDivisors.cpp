// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
		long long n;
		cin>>n;
		vector<long long> arr(n);
		for(long long i=0;i<n;i++)
			cin>>arr[i];
		sort(arr.begin(),arr.end());
		long long div=arr[0]*arr[n-1];
		vector<long long> facts;
		for(long long i=2;i*i<=div;i++){
			if(div%i==0){
				facts.push_back(i);
			    if(div/i!=i){
					facts.push_back(div/i);
				}
			}
			
		}
		sort(facts.begin(),facts.end());
		
		// for(int i=0;i<facts.size();i++)
		// 	cout<<facts[i]<<" ";
		// cout<<endl;
		if(arr==facts)
			cout<<div<<endl;
		else
			cout<<"-1"<<endl;
	}
}
