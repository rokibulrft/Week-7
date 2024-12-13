#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans |= v[i];
        }
        cout << ans << endl;
    }
}