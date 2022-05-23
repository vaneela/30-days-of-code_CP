#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> m >> k;
        set<int> ms;

        std::vector<int> v1, v2;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            ms.insert(x);
        }
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
            ms.insert(x);
        }
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (v1[i] == v2[j])
                {
                    ans1++;
                }
            }
        }
        ans2 = n - ms.size();
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
