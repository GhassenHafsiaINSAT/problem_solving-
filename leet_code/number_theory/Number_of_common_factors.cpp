#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int commonFactors(int a, int b) {
        int res = __gcd (a,b); 
        int nb = 0; 
        for (int i=1 ; i<=res; i++){
            if (res%i == 0) nb++; 
        }
        return nb; 
        
    }
};

int main(){
    int a; 
    int b; 
    cin >> a; 
    cin >> b; 
    Solution solution; 
    int res = solution.commonFactors(a,b); 
    cout << res <<endl; 
}