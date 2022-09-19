// Source: https://usaco.guide/general/io


// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll tc;
	cin>>tc;
	while(tc--){
	ll r,c;
	cin>>r>>c;
	
	if(r==c)
	  cout<<r*c-(r-1);
	else if(r>c && r%2==0)
	  cout<<r*r-(r-1)+(r-c);
	else if(r>c && r%2!=0)
	  cout<<r*r-(r-1)-(r-c);
	else if(c>r && c%2==0)
	  cout<<c*c-(c-1)-(c-r);
	else if(c>r && c%2!=0)
	  cout<<c*c-(c-1)+(c-r);
	cout<<"\n";
	}
}


//Matrix Implementation
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main() {
// 	ll tc;
// 	cin>>tc;
// 	while(tc--){
// 	ll r,c;
// 	cin>>r>>c;
// 	ll a=max(r,c);
// 	// ll arr[a+1][a+1]={0};
// 	 vector<vector<ll>> arr( a+1 , vector<ll> (a+1, 0));
// 	for(ll i=1;i<=a;i++){
// 		for(ll j=1;j<=a;j++){
// 			if(i==j){
// 				arr[i][j]=(i*j)-(i-1);
// 			}

// 		}
// 	}
// 	for(ll i=1;i<=a;i++){
// 		for(ll j=1;j<=a;j++){
// 			if(i%2==0 && i>j){
//             	arr[i][j]=arr[i][i]+(i-j);
// 			}
// 			else if(i%2!=0 && i>j){
//             	arr[i][j]=arr[i][i]-(i-j);
// 			}
// 			else if(j%2!=0 && i<j){
// 				arr[i][j]=arr[j][j]+(j-i);
// 			}
// 			else if(j%2==0 && i<j){
// 				arr[i][j]=arr[j][j]-(j-i);
// 			}
// 		}
// 	}
// 	cout<<arr[r][c]<<endl;
// 	}
// }
