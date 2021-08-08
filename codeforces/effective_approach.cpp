#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;cin>>n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    int q; cin>>q;
    int vs = 0 , ps = 0;
    while(q--) {
        int y; cin>>y;
        auto it = find(v.begin(), v.end(),y);
        int index = (it - v.begin());

        vs += index + 1;
        ps += (v.size() - index) ;
    }
    cout<<vs<<" "<<ps;
    
}
int main()  {
    solve();
}