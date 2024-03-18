#include <bits/stdc++.h>

using namespace std; 
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int nb = 0;  
        for(int i=0; i<nums.size()-1; i++){
            string x = to_string(nums[i]);
            x = x[0]; 
            int final_x = stoi(x); 
            for (int j=i+1; j<nums.size(); j++){
                int res = 0;
                string y = to_string(nums[j]);
                y = y[y.length()-1];
                int final_y = stoi(y);  
                if (i<j){
                    res = __gcd(final_x,final_y);
                    if (res == 1) nb++;   
                }
            }
        }
        return(nb); 
    }
};