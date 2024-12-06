#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int count = 0;
        while (true)
        {
            if (x <= 0 && y <= 0)
            {
                break;
            }
            if (y > 0)
            {
                x = x - (15 - (min(y, 2) * 4));
                y = y - 2;
            }
            else
            {
                x = x - 15;
            }
            count++;
        }
        cout << count << endl;
    }
}