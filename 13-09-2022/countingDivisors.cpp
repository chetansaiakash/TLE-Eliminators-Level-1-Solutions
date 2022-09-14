#include <bits/stdc++.h>
#include <ios>
using namespace std;

#define endl '\n'


const int MAX = 1e6 + 1;


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(0);
    int arr[MAX]={0};
	for(int i=1;i<=MAX;i++){
		for(int j=i;j<=MAX;j+=i){
          arr[j]++;
		}
	}
    int tc; cin >> tc;
    while (tc--) {
      int num;
	  cin>>num;
	  cout<<arr[num]<<endl;
    }
    return 0;
}