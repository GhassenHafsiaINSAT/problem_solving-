#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> freq; 
        for (int num : deck){
            freq[num] ++; 
        }
        int gcd = 0; 
        for (auto pair : freq){
            gcd = __gcd(gcd,pair.second); 
        }
        return (gcd>1);

        
    }
};  

int main(){
    vector <int> deck; 
    Solution solution; 
    int result = solution.hasGroupsSizeX(deck);
    cout << result <<endl;   
}