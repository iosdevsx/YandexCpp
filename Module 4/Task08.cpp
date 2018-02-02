#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, x, a, b, p;
    cin >> n >> x >> a;

    p = a;
    while (n--) {
        cin >> a;
        p = p * x + a;
    }
    cout << p;
}