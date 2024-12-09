#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v;
        v.push_back(n);
        for (int i = 0; i <= __lg(n); i++)
        {
            if ((n >> i) & 1)
            {
                long long value = n - (1LL << i);
                if (value > 0)
                {
                    v.push_back(value);
                }
            }
        }
        sort(v.begin(), v.end());
        cout << v.size() << endl;
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}