#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    int profit=0;
    for(int i=0;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(profit, cost);
        mini=min(mini, arr[i]);
    }
    cout<<profit;
    return 0;
}