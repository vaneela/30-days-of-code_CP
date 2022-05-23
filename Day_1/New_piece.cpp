#include<bits/stdc++.h>
#define ll long long
using namespace std;
int parity(int a,int b){
    if((a+b)%2==0){
        return 1;
    }
    return 0;
}
int main(){

int t;
cin >> t;
while(t--){
    int a,b,p,q;
    cin >> a >> b >> p >> q;
    if(a==p && b==q){
        cout << 0 << endl;
    }
    else if(parity(a,b)==parity(p,q)){
        cout << 2 << endl;
    }else{
        cout << 1 << endl;
    }
}
return 0;
}