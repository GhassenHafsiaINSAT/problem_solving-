#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>v;
        if (n == 2) v.push_back("1/2"); 
        else {
            for(int i=1; i<n; i++){
                for(int j=2; j<=n ; j++){
                int res = __gcd(i, j);
                    if ((res == 1) && (i<j)){
                        string res = to_string(i) + "/" + to_string(j);
                        v.push_back(res); 
                    }   
                }
            }
        }    

    return v;    
    }
};

int main (){
    Solution Solution; 
    int n; 
    cin >> n;
    vector res = Solution.simplifiedFractions(n); 
}