#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
        int n;cin>>n;
        int ans;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        if(v[n-1]==n-1 && v[n-1]==v[n-2]){
            ans=0;
        }
        else{
            ans = n-v[n-1];
        }
        cout<<ans<<endl;
     }
    return 0;
}