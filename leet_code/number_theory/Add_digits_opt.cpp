#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int addDigits(int num) {
        int result = ((num - 1) % 9 + 1); 
        return (result); 
    }
};

int main (){
    int n ; 
    cin >> n; 
    Solution Solution;
    int resultat = Solution.addDigits(n); 
    cout << resultat << endl; 

}
