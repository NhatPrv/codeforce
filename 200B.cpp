#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    double sum = 0;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)  {
        cin >> a[i];
        sum += a[i];
    }
    cout << fixed << setprecision(12) << sum/n << endl;

    return 0;
}