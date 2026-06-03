#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int target = v[j-1];

    if(k > 1) cout << "YES" << endl;
    else{
        sort(v.rbegin(), v.rend());

        if(target == v.front()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
