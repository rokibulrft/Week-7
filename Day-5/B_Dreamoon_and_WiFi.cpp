#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int c1p = 0, c1m = 0, c2p = 0, c2m = 0, c2w = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
            c1p++;
        else
            c1m++;

        if (s2[i] == '+')
            c2p++;
        else if (s2[i] == '-')
            c2m++;
        else
            c2w++;
    }

    cout << fixed << setprecision(12);

    if (c1m == c2m && c1p == c2p)
    {
        cout << 1.0;
    }
    else if (c1m < c2m || c1p < c2p)
    {
        cout << 0.0;
    }
    else
    {
        int need = c1m - c2m + c1p - c2p;
        int pneed = c1p - c2p;
        int mneed = c1m - c2m;
        double total = 1 << c2w;
        double perm = (fact(need)) / (fact(pneed) * fact(mneed));
        cout << perm / total << endl;
    }
}
