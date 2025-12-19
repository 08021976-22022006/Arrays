#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    
    cout<<"Enter Array1 Elements: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];  
    }
    cout<<"\nEnter Array2 Elements: ";
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    vector<int> ans;
    
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]>arr2[j])
            j++;
        else if(arr2[j]>arr1[i])
            i++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout<<"\n";
    for(int i : ans)
        cout<<i<<" ";
}