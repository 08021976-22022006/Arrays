// Moore's Voting Algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int ele=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=0;
            ele=arr[i];
        }
        else if(ele=arr[i])
            cnt++;
        else
            cnt--;
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele)
            cnt1++;
    }
    if(cnt1>n/2){
        cout<<ele;
        return 0;
    }
    cout<<-1;
    return 0;
}