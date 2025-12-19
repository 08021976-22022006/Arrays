#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    map<int, int> mp;
    for(int i=0;i<arr.size();i++){
        int val=arr[i];
        int rem=k-val;
        if(mp.find(rem)!=mp.end()){
            cout<<mp[rem]<<" "<<i;
            return 0;
        }
        else
            mp[val]=i;
    }
    return 0;
}