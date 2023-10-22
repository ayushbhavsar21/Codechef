#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
    vector<int> v;
    int x;
    cin>>x;
    v.push_back(x);
    cin>>x;
    v.push_back(x);
    cin>>x;
    v.push_back(x);
    int ans=0;
    if(v[0]>0){
        ans++;
        v[0]--;
    }
    if(v[1]>0){
        ans++;
        v[1]--;
    }
    if(v[2]>0){
        ans++;
        v[2]--;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(v[0]>0 && v[1]>0){
        ans++;
        v[0]--;
        v[1]--;
    }
    if(v[0]>0 && v[2]>0){
        ans++;
        v[0]--;
        v[2]--;
    }
    if(v[1]>0 && v[2]>0){
        ans++;
        v[1]--;
        v[2]--;
    }
    cout<<ans<<endl;
   }  
    return 0;
}