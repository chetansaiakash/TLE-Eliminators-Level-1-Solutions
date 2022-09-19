// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	string str;
	cin>>str;
	map<char, int> m;
	for(char ch :str){
       m[ch]++;
	}
	int odd_count=0;
	string start="";
	string mid="";
	string fin="";
	map<char,int> :: iterator itr;
	for(itr=m.begin();itr!=m.end();itr++){
		if((*itr).second%2!=0)
		  odd_count++;
	}
	
	if(odd_count<=1){
      for(itr=m.begin();itr!=m.end();itr++){
		if((*itr).second%2==0){
			int repeat=((*itr).second)/2;
			for(int k=1;k<=repeat;k++)
			   start+=(*itr).first;
	    }
		else if((*itr).second%2!=0){
			int repeat=(*itr).second;
			for(int k=1;k<=repeat;k++)
			   mid+=(*itr).first;
		}
	  }
	string rev=start;
    reverse(rev.begin(), rev.end());
 
    fin=fin+start;
    fin=fin+mid;
	fin=fin+rev;
	cout<<fin;
	}
	else{
		cout<<"NO SOLUTION";
	}
	return 0;
}
