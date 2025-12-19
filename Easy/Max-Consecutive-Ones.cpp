#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1)
            cnt++;
        else if(arr[i]==0)
            cnt=0;
        maxi=max(maxi, cnt);
    }
    cout<<maxi;
    return 0;
}