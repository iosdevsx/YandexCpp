#include <iostream>

using namespace std;

int main() {

    int n, t, count;
    cin >> n;
    count = 0;

    while (n--) {
        cin >> t;
        if (t > 0)
            count += 1;
    }
    cout << count;
}