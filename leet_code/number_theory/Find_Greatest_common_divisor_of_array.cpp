#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minVal = 1000; 
        int maxVal = 1; 
        for (int num : nums) {
            minVal = min(minVal, num);
            maxVal = max(maxVal, num);
        }
        int res = __gcd(minVal,maxVal); 
        return(res); 
    }
};

int main(){
    Solution solution; 
    int n; 
    cin >> n; 
    vector<int> num(n); 
    for (int i=0;i<n;i++){
        int k;
        cin >> k; 
        num[i] = k; 
    }
    int res = solution.findGCD(num); 
    cout <<res<<endl; 
}