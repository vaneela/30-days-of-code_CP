#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{

    int n, d;
    cin >> n >> d;
    int risk = 0, nrisk = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= 9 || v[i] >= 80)
        {
            risk++;
        }
        else
        {
            nrisk++;
        }
    }
    int d1 = ceil(float(risk) / d), d2 = ceil(float(nrisk) / d);
    cout << d1 + d2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}