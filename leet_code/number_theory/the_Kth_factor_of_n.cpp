#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        int nb = 0; 
        for (int i=1;i<=n;i++){
            if(n%i == 0) {
                nb ++; 
                v.push_back(i);
            } 
        
        }
        if ((n == 1) && (k ==1)) return 1; 
        else if (k>=n) return -1;
        else return v[k-1];
    }
};