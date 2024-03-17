#include <bits/stdc++.h>

using namespace std; 
class solution {
    public: 
        int addDigits(int n){
            while (n>9){ 
                int somme = 0; 
                while (n){
                    somme += n%10;
                    n/=10;
                }
                n = somme; 
            }
            return n; 
}
};

int main() { 
    int n;
    cin >> n; 
    solution solution;
    int result  = solution.addDigits(n);
    cout << result << endl;
    return(0);
}
