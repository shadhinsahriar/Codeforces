#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    long long  t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        vector<long long> v(n);
        vector<long long> b(n);

        for(long i = 0; i < n; i++){
            cin >> v[i];
        }

        for(long i = 0; i < n; i++) {
            cin >> b[i];
        }

        for(long i = 0; i < n; i++) {
            if(v[i] > b[i]) swap(v[i], b[i]);
        }

        long long sum = 0;
        for(long long i = 0; i < n; i++){
            sum += b[i];
        }
        
        sort(v.begin(), v.end());

        cout << sum + v.back() << endl;
    }

    return 0;
}
