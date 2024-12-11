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
        string s, c;
        cin >> s >> c;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != c[i])
            {
                count++;
            }
        }
        if (count % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}