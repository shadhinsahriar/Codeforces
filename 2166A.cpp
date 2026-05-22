#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;

        string s;
        cin >> s;

        char base = s.back();
        for (int i = n-2; i >= 0; i--) {
            if(base != s[i]) count++;
        }
      
        cout << count << endl;
    }
    return 0;
}
