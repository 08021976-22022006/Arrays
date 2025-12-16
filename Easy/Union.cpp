#include<bits/stdc++.h>
using namespace std;

void unionArray(vector<int>& nums1, vector<int>& nums2, vector<int>& unionArr, int n1, int n2){
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(nums1[i]<=nums2[j]){
            if(unionArr.size()==0 || unionArr.back()!=nums1[i])
                unionArr.push_back(nums1[i]);
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=nums2[j])
                unionArr.push_back(nums2[j]);
            j++;
        }
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=nums1[i])
                unionArr.push_back(nums1[i]);
        i++;
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=nums2[j])
                unionArr.push_back(nums2[j]);
            j++;  
    }
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<<"\nEnter Array 1 elements: ";
    vector<int> nums1(n1);
    for(int i=0;i<n1;i++)
        cin>>nums1[i];
    vector<int> nums2(n2);
    cout<<"\nEnter Array 2 elements: ";
    for(int i=0;i<n2;i++)
        cin>>nums2[i];
    cout<<"\n";
    vector<int> unionArr;
    unionArray(nums1, nums2, unionArr, n1, n2);
    cout<<"\nUnion Array: ";
    for(int i : unionArr)
        cout<<i<<" ";
}