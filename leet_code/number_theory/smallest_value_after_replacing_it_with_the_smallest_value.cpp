#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int smallestValue(int n) {
    while(n){
        if (n == 4) break;
        vector<int> factors; 
        while (n > 1 && n%2 == 0){
            factors.push_back(2);
            n/=2;
        }
        
        for(int i=3; i<=sqrt(n); i++){
            while (n%i == 0) {
                factors.push_back(i);
                n/=i;
            }
        }
        if (n>1) factors.push_back(n); 
        int somme = 0;
        for(int j=0; j<factors.size();j++){
            somme += factors[j];
        }
        n = somme;
        int nb = 0;
        for (int k = 2; k <= sqrt(n) ; k++)
        {
            if (n%k ==0) nb++;
        }
        if (nb ==0) break;  
        
    }
        return(n);
    }
};

int main(){
    Solution solution; 
    int res = solution.smallestValue(4); 
    cout << res <<endl; 
}