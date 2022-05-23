#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int z = 0, o = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        if (o == n)
        {
            cout << 100 << endl;
        }
        else
        {
            bool flag = 0;
            for (int i = 0; i < m; i++)
            {
                if (v[i] == 1)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << k << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    // your code goes here
    return 0;
}
