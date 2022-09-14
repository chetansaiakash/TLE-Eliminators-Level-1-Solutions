#include <bits/stdc++.h>
#include <ios>
using namespace std;

#define endl '\n'


const int MAX = 1e6 + 1;


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(0);
    int tc; cin >> tc;
    while (tc--) {
      int num;
	  cin>>num;
      int po2=0;
      int po3=0;
      while(num%2==0){
        po2++;
        num/=2;
      }
      while(num%3==0){
          po3++;
          num/=3;
      }
      if(num==1){
          if(po3>=po2){
             cout<<(po3-po2)+po3<<"\n";
          }
          else{
            cout<<"-1"<<"\n";
          }
      }
      else{
          cout<<"-1"<<"\n";
      }
    }
    return 0;
}