#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int>v; 
        int num_lignes = nums.size(); 
        int num_col = nums[0].size(); 
        int dimension  = num_lignes*num_col; 

        for (int i=0; i<dimension; i++){
                int x = i/num_col; 
                int y = i%num_col; 
                if ((x==y) || ((x+y) == dimension - 1)) {
                    int nb = 0;  
                    for (int i = 2; i <= sqrt(nums[x][y]); i += 1) {
                        if (nums[x][y] % i == 0) nb ++;
                    }
                    if (nb == 0) v.push_back(nums[x][y]);
                }
            }
        
        int maxVal = 0; 
        for (int i = 0; i<v.size(); i++){
            if (maxVal< v[i]) maxVal = v[i]; 
        }
        return maxVal;
        
    }
};

int main(){
    Solution solution; 
    return 0;
}