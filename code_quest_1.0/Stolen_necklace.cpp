#include <bits/stdc++.h>
#include <string>
using namespace std; 
int main(){
    int t; 
    int n; 
    string ch; 
    cin >> t; 
    while(t!=0){
        int i = 0;
        int k = 0;
        cin>>n; 
        cin>>ch; 
        while (i<n) {
            if (ch[i] == '?') k++; 
            if (ch[i] == '1') k=1;
            if (ch[i] == '0'){
                k++;
                break; 
            }
            i++;
        }
        cout <<k<<endl;
        t--;  
        }
    return 0; 
}