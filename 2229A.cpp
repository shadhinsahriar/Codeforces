#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int mid = (v.front() + v.back())/2;

        if(abs(mid - v.front()) >= abs(mid - v.back())) cout << abs(mid - v.front()) << endl;
        else cout << abs(mid - v.back()) << endl;
    }
    return 0;
}
