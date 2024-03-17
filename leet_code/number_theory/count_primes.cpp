
#include <bits/stdc++.h>
using namespace std;  

class Solution {
public:
    int countPrimes(int n) {
        if (n<2) return(0);
        vector<bool> isPrime(n,true); 
        isPrime[0] = isPrime[1] = false; 
        for (int i = 2; i<sqrt(n); i++){
            if (isPrime[i]){
                for (int j = i*i ; j < n ; j+=i){
                    isPrime[j] = false; 
                }
        }
        }
        int nb = 0; 
        for (int i=0; i<n; i++){
            if (isPrime[i] == true) nb++; 
        }
        return nb; 
}
};

int main(){
    int n; 
    cin >> n; 
    Solution solution; 
    int result = solution.countPrimes(10); 
    cout << result << endl; 
    return(0);
}