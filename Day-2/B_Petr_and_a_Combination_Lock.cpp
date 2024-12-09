#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                sum += a[k];
            }
            else
            {
                sum -= a[k];
            }
        }
        if (sum % 360 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}