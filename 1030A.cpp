#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;  cin >> n;
    string kt = "EASY";
    for (int i=0;i<n;i++) {
        int x;  cin >> x;
        if (x==1) kt = "HARD";
    }
    cout << kt;
    return 0;
}