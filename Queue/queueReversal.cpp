// Given a Queue A, you need to reverse the Queue. 

// Input: 
// The first line of input contains an integer T denoting the Test cases. Then T test cases follow. 
// Second line contains value of N 
// Third line a[i] elements

// Output:
// Array elements in reverse order

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 10^5
// 1 ≤ a[i] ≤ 10^5

// Example:
// Input : 
// 2
// 6
// 4 3 1 10 2 6
// 4
// 4 3 2 1 

// Output : 
// 6 2 10 1 3 4
// 1 2 3 4

#include <bits/stdc++.h>
queue<long long int> rev(queue<long long int> q)
{
    queue<long long int> ans;
    stack<long long int> s;
    
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    return ans;
    
}