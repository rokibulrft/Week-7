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
        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (!(A[i] > 2 * B[i]) && !(B[i] > 2 * A[i]))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}