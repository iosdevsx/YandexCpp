#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p, x, y, k;
    cin >> p >> x >> y >> k;
    double total = x * 100 + y;
    int i = 1;
    while (i <= k) {
        total = trunc(total * (1 + (p / 100)));
        i += 1;
    }

    cout << (int) total / 100 << " " << (int) total % 100;
}