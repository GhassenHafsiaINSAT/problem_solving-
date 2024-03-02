#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        string target;
        cin >> n >> target;
 
        string labels[n];
        int JaqenPosition = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> labels[i];
            if (labels[i] == "Jaqen")
            {
                JaqenPosition = i;
            }
        }
 
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (target == labels[(JaqenPosition + i) % n])
            {
                ans = i;
                break;
            }
            if (target == labels[(JaqenPosition - i + n) % n])
            {
                ans = i;
                break;
            }
        }

        cout << ans << '\n';
    }
}