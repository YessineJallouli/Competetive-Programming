#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        if (n == 2)
            cout << 2 << '\n';
        else 
            cout << n%2 << '\n';
    }
}