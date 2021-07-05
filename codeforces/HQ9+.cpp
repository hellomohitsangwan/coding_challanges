
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin>>s;
    bool ip = 0;
    for(int i=0; i < s.length(); i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+') {
            cout<<"YES";
            ip = 1;
            return;
        }
    }
    if(!ip) {
        cout<<"NO";
    }
}
int main()  {
    solve();
}