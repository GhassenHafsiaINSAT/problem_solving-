#include <string>
#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
            int current_width = 0;
    int lines = 1; // Start with one line

    for (char c : s) {
        int char_width = widths[c - 'a']; 

        if (current_width + char_width > 100) {
            lines++; 
            current_width = char_width; 
        } 
        else {
            current_width += char_width; 
        }
    }
    return {lines, current_width};
        
    }
};



int main(){
    Solution sol; 
    std::vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10}; 
    std::string s = "abcdefghijklmnopqrstuvwxyz"; 
    std::vector<int> res; 
    res = sol.numberOfLines(widths,s); 
    return 0; 
}