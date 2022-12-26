#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 1 || s[i] != 4)
        {
            flag = true;
            cout << "NO" << endl;
            // flag=true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    return 0;
}