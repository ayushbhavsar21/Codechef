#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n), ca(n), cb(n);
    map<long long, multiset<long long>> mp;
    for(auto &i : a) cin >> i;
    for(auto &i : ca) cin >> i;
    for(auto &i : b) cin >> i;
    for(auto &i : cb) cin >> i;
    map<long long, long long> isb;
    for(long long i = 0; i < n; i++) {
        mp[ca[i]].insert(a[i]);
        mp[cb[i]].insert(b[i]);
        isb[cb[i]] = 1;
    }
    long long st = -1;
    for(long long i = 0; i < n; i++) {
        if(!isb[ca[i]]) {
            if(a[i] < st) {
                cout << "No" << endl;
                return;
            }
            st = a[i];
            continue;
        }
        auto it = mp[ca[i]].lower_bound(st);
        if(it == mp[ca[i]].end()) {
            cout << "No" << endl;
            return;
        }
        st = *it;
        mp[ca[i]].erase(it);
    }
    cout << "Yes" << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--)
        solve();
}