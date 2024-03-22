#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> is_prime(right+1,true);
        vector<int> primes; 
        for (int i=2 ; i*i<=right; i++){
            if (is_prime[i]){
                for(int j =i*i;j<=right;j+=i) {
                    is_prime[j] = false; 
                }
            }}
        
        for (int k = 2; k<=right; k++){
            if (is_prime[k] == true){
                primes.push_back(k);
        }
        }

        int minDiff = right;
        vector <int> finalRes;
        int x = 0;
        for (int i = 2; i < primes.size(); i++)
        {
            if (primes[i-1]>=left && primes[i]<=right){
                x = 1;
                if (abs(primes[i] - primes[i-1])< minDiff){
                    minDiff = abs(primes[i] - primes[i-1]);
                    finalRes ={primes[i-1],primes[i]};
                }
            }
        }
        if (!x) return {-1,-1};
        else return finalRes;


    }
};

int main(){
    Solution solution; 
    vector<int> res;
    res = solution.closestPrimes(4,6); 

}