#include <iostream>

using namespace std;

int main() {
    int n, min, count;
    cin >> n;

    count = 0;

    while (n--) {
        int temp;
        cin >> temp;
        if (count == 0) {
            min = temp;
        }

        if (min < 0 || (min == 0 || temp < min && temp > 0)) {
            min = temp;
        }

        count += 1;
    }

    cout << min;
}