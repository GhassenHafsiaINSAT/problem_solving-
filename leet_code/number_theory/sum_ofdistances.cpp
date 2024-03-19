#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long> v; 
        for (int i=0; i<nums.size(); i++){
            int somme = 0; 
            for (int j=0 ; j<nums.size(); j++){
                if ((j!=i) && (nums[i] == nums[j])) somme +=  abs(i-j); 
            }
            v.push_back(somme);
            
        }
        return(v);  
    }

};