#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while(n--) {
        int x, sum = 0;

        for(int i = 0; i < 3; i++) {
            cin >> x;
            if(x > 0) sum++;
        }

        if(sum >= 2) count ++;
    }

    cout << count << endl;

    return 0;
}
