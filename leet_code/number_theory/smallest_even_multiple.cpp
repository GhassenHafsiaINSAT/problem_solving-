#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n % 2 == 0) ? n : 2 * n;
    }
};

int main() {
    int n; 
    cin >> n; 
    Solution solution; 
    int res = solution.smallestEvenMultiple(n); 
    cout << res << endl; 
}