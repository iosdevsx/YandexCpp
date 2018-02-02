#include <iostream>

using namespace std;

int main() {

    int n, t, count;
    cin >> n;

    int prev;
    count = 0;

    while (n--) {
        cin >> t;
        if (t > prev && count > 0) {
            cout << t << " ";
        }
        prev = t;
        count += 1;
    }
}