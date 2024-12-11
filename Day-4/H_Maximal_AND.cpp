#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> bits(31);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (bits[i] == n)
            {
                ans += (1 << i);
            }
            else
            {
                int needed = n - bits[i];
                if (needed <= k)
                {
                    ans += (1 << i);
                    k -= needed;
                }
            }
        }
        cout << ans << "\n";
    }
}