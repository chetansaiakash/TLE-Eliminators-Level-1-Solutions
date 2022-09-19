// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
bool inAp(int a,int b,int c){
  if((a+c)%(2*b)==0)
    return true;
  else if((2*b-a>0)&&(2*b-a)%c==0)
	return true;
  else if((2*b-c>0)&&(2*b-c)%a==0)
    return true;
  else
    return false;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
		int a,b,c;
		cin>>a>>b>>c;
		if(inAp(a, b, c))
		  cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
	}
}
