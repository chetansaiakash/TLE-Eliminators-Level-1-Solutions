// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n;
	cin>>n;
	vector<ll> arr(n);
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll sum=0;
	for(ll i=1;i<=n-1;i++){
      if(arr[i]<arr[i-1]){
         sum=sum+arr[i-1]-arr[i];
		 arr[i]=arr[i-1];
	  }
	}
	cout<<sum;
  return 0;
}
