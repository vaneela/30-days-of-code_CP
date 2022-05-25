#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n), dif, aff;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int min, max;
        for (int i = 0; i < n - 1; i++)
        {
            dif.push_back(v[i + 1] - v[i]);
        }
        int x = 1;
        for (int i = 0; i < dif.size(); i++)
        {
            if (dif[i] < 3)
            {
                x++;
            }
            else
            {
                aff.push_back(x);
                x = 1;
            }
            if (i == dif.size() - 1)
            {
                aff.push_back(x);
                x = 1;
            }
        }
        sort(aff.begin(), aff.end());
        min = *aff.begin();
        max = *(--aff.end());
        cout << min << " " << max << endl;
    }
    return 0;
}