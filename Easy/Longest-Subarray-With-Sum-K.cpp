// Both positive & negative
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
    map<long long, int> mp;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k)
            maxLen=max(maxLen, i+1);
        long long rem = sum-k;
        if(mp.find(rem)!=mp.end()){
            int len = i-mp[rem];
            maxLen=max(maxLen, len);
        }
        if(mp.find(sum)==mp.end());
            mp[sum]=i;
    }
    cout<<maxLen;
}




// Only for positve
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
    int left=0;int right=0;
    long long sum=arr[0];
    int maxLen=0;
    while(right<n){
        if(sum>k && left<=right){
            sum=sum-arr[left];
            left++;
        }
        if(sum==k)
            maxLen=max(maxLen, right-left+1);
        right++;
        if(right<n)
            sum=sum+arr[right];
    }
    cout<<maxLen;
    return 0;
}