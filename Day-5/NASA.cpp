#include <bits/stdc++.h>
using namespace std;

const int maxN = (1 << 15);
vector<int> mark_palindrome;

bool is_palindrome(int a)
{
    string s = to_string(a);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (is_palindrome(i))
        {
            mark_palindrome.push_back(i);
        }
    }
}

int main()
{
    markPalindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), cnt(maxN + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < mark_palindrome.size(); j++)
            {
                int cur = v[i] ^ mark_palindrome[j];
                ans += cnt[cur];
            }
        }
        cout << (ans / 2) << endl;
    }
}