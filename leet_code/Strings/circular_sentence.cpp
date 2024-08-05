#include <iostream>
#include <string>

class Solution {
public:
    bool isCircularSentence(string sentence) {

        for(int i = 1; i < sentence.length();i++){

            if(sentence[0] == sentence[sentence.length()-1]){

                if(sentence[i] == ' ' && !(sentence[i-1] == sentence[i+1])){
                    return false;
                }
            }
            else{
                return false;
            }
        }

        return true;


        
    }
};

int main(){
    Solution s; 
    s.isCircularSentence("Leetcode eisc cool");
}