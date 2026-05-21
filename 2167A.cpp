#include <iostream>
#include <set>
using namespace std;

void solve() {
    int n;
    set<int> st;

    for(int i = 0; i < 4; i++) {
        cin >> n;
        st.insert(n);
    }
    
    if(st.size() == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
