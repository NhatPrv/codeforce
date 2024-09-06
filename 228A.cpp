#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long A[4];
    for (long long &i : A) {
        cin >> i;
    }
    int cnt = 0;
    for (int i=0; i<3; i++) {
        for (int j=i+1;j<4;j++) {
            if (A[i] == A[j]) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}