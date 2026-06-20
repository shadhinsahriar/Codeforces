/*
 * Author   : shadhinsahriar
 * Platform : Codeforces
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

using ll  = long long;
using pii = pair<int, int>;
using vi  = vector<int>;

#define all(x)   (x).begin(), (x).end()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define fi       first
#define se       second
#define yes      cout << "YES\n"
#define no       cout << "NO\n"

inline void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;

    if(n % 5 == 0) cout << n/5 << endl;
    else cout << n/5 +1 << endl;

}

#define MULTI_TEST 0
int main() {
    fastio();
#if MULTI_TEST
    int t;
    cin >> t;
    while (t--) solve();
#else
    solve();
#endif
    return 0;
}
