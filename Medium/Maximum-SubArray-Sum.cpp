// Kandane's Algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxi)
            maxi=sum;
        if(sum<=0)
            sum=0;
    }
    cout<<maxi;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    int start=0;
    int ansStart=0;
    int ansEnd=0;
    for(int i=0;i<n;i++){
        if(sum==0)
            start=i;
        sum=sum+arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<=0)
            sum=0;
    }
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<maxi;
    return 0;
}