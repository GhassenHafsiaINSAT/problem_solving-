#include <string>
#include <unordered_map>

class Solution {
public:

    int romanToInt(string s){
        std::unordered_map<char, int> romain_map = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
        };

        int result = 0; 
        for (int i =0; i<s.length(); i++){
            
            int value = romain_map[s[i]]; 
            if ((i<s.length()-1) && (value < romain_map[s[i+1]]))    result -= value; 
            else result += value; 

        }


        return result; 
    }
};