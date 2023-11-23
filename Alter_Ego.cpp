#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> B,e,o;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        B.push_back(x);
            if(x%2==0)
                e.push_back(x);
            else   
                o.push_back(x);
	    }
        if(e.size()%2!=0 || e.size()%2!=0)
            cout<<-1<<endl;
        else{
            vector<int> ans1,ans2;
            sort(e.rbegin(),e.rend());
            sort(o.rbegin(),o.rend());
            for(int i = 0; i < o.size()/2; i++){
            int el1 = o[i];
            int el2 = o[o.size()-i-1];

            int m1 = (el1 - el2)/2;
            int m2 = o[i] - m1;

            // cout<<m1<<" "<<m2<<endl;

            ans1.push_back(m1);
            ans2.push_back(m2);
        }

        for(int i = 0; i < e.size()/2; i++){
            int el1 = e[i];
            int el2 = e[e.size()-i-1];

            int m1 = (el1 - el2)/2;
            int m2 = e[i] - m1;

            ans1.push_back(m1);
            ans2.push_back(m2);
        }
            for(int i:ans1){
                cout<<i<<" ";
            }for(int i:ans2){
                cout<<i<<" ";
            }
            cout<<endl;
        }

	}
	return 0;
}
