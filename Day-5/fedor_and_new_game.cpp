#include <bits/stdc++.h>
using namespace std;

int countSetBits(int num)
{
    int count = 0;
    while (num)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int v[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int diff = v[m] ^ v[i];
        if (countSetBits(diff) <= k)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
