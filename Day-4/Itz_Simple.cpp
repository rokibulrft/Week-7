#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p, sum = 0;
        cin >> n >> k >> p;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        k += v[n - 1];
        p += sum - v[n - 1];
        if (k > p)
        {
            cout << "Ved" << endl;
        }
        else if (k < p)
        {
            cout << "Varun" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
}