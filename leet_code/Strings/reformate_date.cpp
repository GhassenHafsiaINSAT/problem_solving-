#include <iostream>
#include <string.h>
#include <map>


class Solution {
public:
    std::string reformatDate(std::string date) {
        
        static std::map<std::string, std::string> months_map= {
            {"Jan", "01"}, 
            {"Feb", "02"}, 
            {"Mar", "03"}, 
            {"Apr", "04"},
            {"May", "05"}, 
            {"Jun", "06"}, 
            {"Jul", "07"},
            {"Aug", "08"}, 
            {"Sep", "09"}, 
            {"Oct", "10"},
            {"Nov", "11"}, 
            {"Dec", "12"}, 

        };
        
        int pos = -1;

        for (size_t i = 0; i < date.length(); ++i) {
            if (std::isalpha(date[i])) { 
                pos = i;
                break; 
            }
        }
        std::string day = date.substr(0,pos);
        if (day.length()<2) day = "0" + day; 
        std::string month = date.substr(pos + 3,3);
        std::string year = date.substr(pos + 7,4);  

        auto it = months_map.find(month); 
        if (it!=months_map.end())
            month = it->second; 

        std::string result = year + '-' + month + '-' + day; 
        
        return result; 
    }
};
       