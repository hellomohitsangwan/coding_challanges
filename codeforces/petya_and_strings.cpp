
// A. Petya and Strings
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

// Examples
// inputCopy
// aaaa
// aaaA
// outputCopy
// 0
// inputCopy
// abs
// Abz
// outputCopy
// -1
// inputCopy
// abcdefg
// AbCdEfF
// outputCopy
// 1
// Note
// If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

// http://en.wikipedia.org/wiki/Lexicographical_order


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