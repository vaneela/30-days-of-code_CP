#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,x;
        cin >> n >> x >> k;
               
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int count =0;
        for(int i=0;i<n;i++){
            if((abs(a[i]-b[i]))<=k){
                count ++;
            }
        }
        if(count >= x){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}