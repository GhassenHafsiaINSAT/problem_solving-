#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {
        long long minValue = 1000000001;
        for (int i=0;i<nums.size();i++){
            if (minValue>nums[i]) minValue = nums[i]; 
        }
        int nb = 0;
        int k = -1;
        for (int j=0;j<nums.size();j++){
            if (nums[j] == minValue) nb++;
            if (nums[j] % minValue != 0) k =1;
        }

        
        if ((nb>1)&&(k != 1)) return (ceil(nb/2.0)); 
        else return 1;
    }   
};

int main(){
    Solution solution; 
    vector<int> v = {3,4,3,4,1,1,1,2};
    int res = solution.minimumArrayLength(v);
    cout <<res<<endl;
}