#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    vector<int> v;
        bool ok=true;
        int sum=0;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    if(n==1){}
	    else{
    	    sum = v[0]+v[n-1];
    	    if(sum>k)
    	        ok=false;
	    }
        if(ok) cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
	}
	return 0;
}
