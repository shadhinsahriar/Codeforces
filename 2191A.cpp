#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, bool>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first;

        v[i].second = (i % 2 == 0);
    }

    sort(v.begin(), v.end());

    bool ok = true;

    for(int i = 0; i < n - 1; i++) {

        if(v[i].first < v[i + 1].first && v[i].second != v[i + 1].second) {
            continue;
        }
        else {
            ok = false;
            break;
        }
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
