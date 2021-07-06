// B. Queue at the School
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

// Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

// You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.

// Input
// The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

// The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".

// Output
// Print string a, which describes the arrangement after t seconds. If the i-th position has a boy after the needed time, then the i-th character a must equal "B", otherwise it must equal "G".

// Examples
// inputCopy
// 5 1
// BGGBG
// outputCopy
// GBGGB
// inputCopy
// 5 2
// BGGBG
// outputCopy
// GGBGB
// inputCopy
// 4 1
// GGGB
// outputCopy
// GGGB


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , t; cin>>n>>t;
    vector<char> v;
    for(int i = 0 ; i < n ; i++) {
        char x; cin>>x;
        v.push_back(x);
    }
    
    while (t--)
    {
        for(int i = 0 ; i < n-1 ; i++) {
            if(v[i] == 'B' && v[i+1] == 'G') {
                swap(v[i], v[i+1]);
                i++;
            }
        }
    }
    for(int i = 0 ; i < n ; i++) {
        cout<<v[i];
    }
}
int main()  {
    solve();
}

