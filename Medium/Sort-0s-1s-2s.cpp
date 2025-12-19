#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr(low), arr(mid));
            low++;
            mid++;
        }
    }
}