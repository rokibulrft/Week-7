#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        long long int A, B;
        B = (1 << __lg(x));
        A = B ^ x;
        cout << min(A, B) << " " << max(A, B) << endl;
    }
}