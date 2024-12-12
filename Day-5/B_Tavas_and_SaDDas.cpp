#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int n = num.size();
    int ans = (1 << n) - 2;
    for (int i = n - 1, count = 0; i >= 0; i--, count++)
    {
        if (num[i] == '7')
        {
            ans += (1 << count);
        }
    }
    cout << (ans + 1) << endl;
}