#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        int count = 1;
        h = h - y;
        if (h > 0)
        {
            int n;
            if (h % x == 0)
            {
                n = h / x;
            }
            else
            {
                n = h / x;
                n++;
            }
            count += n;
        }
        cout << count << endl;
    }
}