#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<long long> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     unordered_map<long long, long long> freq;

//     for (long long x : arr) {
//         freq[x]++;
//     }

//     long long ans = 0;
//     for (auto &it : freq) {
//         if (it.second % 2 == 1) {
//             ans = it.first;
//             break;
//         }
//     }

//     cout << ans;
//     return 0;
// }
