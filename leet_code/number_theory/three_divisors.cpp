#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int nb = 0; 
        for(int i=1; i<=n ; i++){
            if (n%i == 0) nb ++;
        }
        if (nb == 3) return true; 
        else return false;  
    }
};

int main(){
    Solution solution; 
    int n; 
    cin >> n; 
    int res = solution.isThree(n); 
    cout << res << endl; 
}