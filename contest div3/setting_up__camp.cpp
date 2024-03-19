#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int introvert = 0; 
        int extrovert = 0; 
        int universal = 0; 
        int nb = 0; 
        for(int i=0; i<3; i++){
            int k = 0; 
            cin >> k; 
            if (i == 0) introvert = k;
            if (i == 1) extrovert = k; 
            if (i == 2) universal = k; 
        } 
        nb = nb + introvert; 
        while ((universal>0) && (extrovert%3 != 0)){
                extrovert ++; 
                universal --; 
            }
        if (extrovert%3 == 0) {
            nb += extrovert/3;
            if (universal>3){
                nb += universal/3; 
                nb ++;
            }
            else if(universal>0) nb ++; 
            cout << nb <<endl; 
        } 
        else{
            cout << -1 <<endl;    
            }

        }
    
    
    return 0; 
}