
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s1 , s2; cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1 == s2){
        cout<<0;
        return;
    } else {
        set<string> s;
        s.insert(s1);
        s.insert(s2);
        auto first = s.begin(); // get iterator to 1st element
        string shorterString = *(first);
        // advance(first, 1);     // advance by 1  //advance is a function used to move a iterator by the value entered
        // string longerString = (*first);
        if(shorterString == s2) {  //means that the first string acc. to the dictionary is s2 => s2 < s1
            cout<<1;
            return;
        } else {
            cout<<-1;
            return;
        }
        // stcout << *first;  
    }
}
int main()  {
    solve();
}