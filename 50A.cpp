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
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
#include <numeric>
#include <functional>
#include <utility>
#include <sstream>
#include <cassert>

using namespace std;

using ll   = long long;
using ull  = unsigned long long;
using ld   = long double;
using pii  = pair<int, int>;
using pll  = pair<ll, ll>;
using vi   = vector<int>;
using vll  = vector<ll>;
using vvi  = vector<vector<int>>;

const int    INF   = INT_MAX / 2;
const ll     LINF  = LLONG_MAX / 2;
const ld     EPS   = 1e-9;
const ll     MOD   = 1e9 + 7;
const double PI    = acos(-1.0);

#define all(x)        (x).begin(), (x).end()
#define rall(x)       (x).rbegin(), (x).rend()
#define sz(x)         (int)(x).size()
#define pb            push_back
#define fi            first
#define se            second
#define yes           cout << "YES\n"
#define no            cout << "NO\n"

inline void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

#ifndef ONLINE_JUDGE
    #define dbg(x) cerr << "[" << #x << "] = " << (x) << "\n"
#else
    #define dbg(x)
#endif

ll power(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve() {
    int n, m;
    cin >> n >> m;

    cout << (n*m) /2 << endl;
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
