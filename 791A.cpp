#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int a, b;   cin >> a >> b;
    int count=0;
    while (a<=b) {
        count++;
        a*=3;
        b*=2;
    }
    cout << count;
    return 0;
}