#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str_x = std::to_string(x); 
        int number_digits = str_x.length(); 
        std::string str_y = str_x; 
        for (int i = 0; i < number_digits; i++)
        {
            char buffer = str_x[number_digits-1-i];
            str_y[number_digits-i-1] = str_y[i];
            str_y[i] = buffer;  
        }
        if (str_x==str_y) 
        {   std::cout<<"true"<<std::endl;
            return true;
        }
        else {
                std::cout<<"false"<<std::endl;
                return false; 
    }
}
};


int main() {
    Solution s;
    s.isPalindrome(121);
    return 0; 
}