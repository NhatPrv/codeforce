#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, k; cin >> n >> k;
    if (n&1) {
        if (k <= n/2+1) {
            cout << k*2-1;
        }
        else {
            k -= (n/2+1);
            cout << k*2;
        }
    }
    else {
        if (k <= n/2) {
            cout << k*2-1;
        }
        else {
            k -= (n/2);
            cout << k*2;
        }
    }

    return 0;
}