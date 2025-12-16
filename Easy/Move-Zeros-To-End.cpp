#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int t=a;
    a=b;
    b=t;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<nums.size();i++)
        cin>>nums[i];
    int j=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        for(int i : nums)
            cout<<i<<" ";
        return 0;
    }
    for(int i=j+1;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    for(int i : nums)
        cout<<i<<" ";
    return 0;
}