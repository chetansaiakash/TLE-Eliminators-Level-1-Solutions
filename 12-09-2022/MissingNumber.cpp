// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  ll n;
  cin>>n;
  vector<ll> arr(n+1,0);
  ll a=n-1;
  
  ll z;
  while(a--){
    cin>>z;
    arr[z]=1;
  }
  
  for(int o=1;o<=n;o++){
    if(arr[o]==0){
      cout<<o;
      break;
    }
  }

}
