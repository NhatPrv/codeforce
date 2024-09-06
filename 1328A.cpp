#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        if (x % y == 0) cout << 0 << endl;
        else if (x > y) cout << y - (x % y) << endl; 
        else cout << y - x << endl; 
    }

    return 0;
}