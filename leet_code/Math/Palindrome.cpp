#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str_x = std::to_string(x); 
        int number_digits = str_x.length(); 
        std::string str_y = str_x; 
        std::reverse(str_y.begin(), str_y.end());
        if (str_x==str_y) return true;
        else return false;
}
};


int main() {
    Solution s;
    s.isPalindrome(121);
    return 0; 
}