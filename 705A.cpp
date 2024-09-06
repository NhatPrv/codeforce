#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    stack<string> q;
    if (n % 2 == 0) {
        q.push_back("I love it");
    } else if (n % 2 == 1) {
        q.push_back("I hate it");
    }

    for (int i = 1; i <n; i++) {
        if (q[i-1] == "I hate it") {
            q.push_back("I love it");
        } else if (q[i-1] == "I love it") {
            q.push_back("I hate that");
        } else if (q[i-1] == "I love that") {
            q.push_back("I hate that");
        }
    }
    return 0;

}