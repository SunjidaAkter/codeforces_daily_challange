#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        int diff = y - x;
        int b = -1;

        for (int i = 1; i <= n; i++) {
            int a = (diff + i - 1) / i; // Calculate the i-th element of a
            if (a <= y && (a * (n - i)) + (x - a) == diff) {
                b = a;
                break;
            }
        }

        if (b == -1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << b << " ";
                b += (i + 1);
            }
            cout << endl;
        }
    }

    return 0;
}
