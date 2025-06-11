#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int64_t a, b;

        cin >> a >> b;
        int f = 0;
        if (a % 2 && b % 2 && a!=b) f = 1;

        int cntTwo = 0;
        if (b < a) {
            for (int i = 0; i < 64; i++) {
                if (a == b) break;

                b = b << 1;
                cntTwo++;

                if (a == b) break;
            }
        }
        else {
            for (int i = 0; i < 64; i++) {
                if (a == b) break;
                if (b%2) {f=1; break;}
                b = b >> 1;
                cntTwo++;

                if (a == b) break;

            }
        }
        if (f || a != b) cout << -1 << "\n";
        else {
            int ans = cntTwo / 3;
            cntTwo = cntTwo % 3;
            ans += cntTwo / 2;

            cntTwo = cntTwo % 2;
            ans += cntTwo;
            cout << ans << "\n";
        }

    }

}
