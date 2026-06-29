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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    
    vector<bool> possible(n-k, true);
    for(int j = 0; j < n - k; j++) {
        for(int i = 0; i < n - k; i += k) {
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';

            if(s[i+k] == '1') s[i+1] = '0';
            else s[i+k] = '1';
            
        }

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                possible[j] = false;
                break;
            }
        }
    }

    for(auto x : possible) {
        if(x) cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

#define MULTI_TEST 1

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