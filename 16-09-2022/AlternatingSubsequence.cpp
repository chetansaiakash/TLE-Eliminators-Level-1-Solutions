#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int i=0;
        long long sum=0;        // integer overflow
        vector<int> fin;
        while(i<n){                          // (i == n) will give SEG-FAULT
            if(arr[i]<0){
                while(i < n and arr[i]<0){   // left to right execution
                    fin.push_back(arr[i]);
                    i++;
                }
            }else{
                while(i < n and arr[i]>0){   // left to right execution
                    fin.push_back(arr[i]);
                    i++;
                }
            }
            sum+=*max_element(fin.begin(), fin.end());    
            fin.clear();  
        }
        cout<<sum<<endl;
    }
}