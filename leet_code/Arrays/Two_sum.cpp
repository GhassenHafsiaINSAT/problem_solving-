#include <bits/stdc++.h>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target){
        std::vector<int>::iterator it;
        std::vector<int> resultat;
        for (int i = 0; i < nums.size(); i++)
        {
            int find = 0; 
            find = target - nums[i];
            std::cout<<"target  "<<target<<"\n"; 
            it = std::find(nums.begin(),
                           nums.end(), find);
            if (it != nums.end())
                
                {
                    int index = std::distance(nums.begin(), it);
                    if (index != i) {
                    resultat = {i, index};
                    break;
                    }
            }
        }
        return resultat;
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = s.twoSum(nums, target);

    for (int index : result)
    {
        std::cout << index << " ";
    }

    return 0;
}