#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    int counter = 0;
    while (counter <= n) {
        b += a;
        a = b - a;
        counter += 1;

        if (a > n) {
            counter = -1;
            break;
        } else if (a == n) {
            break;
        }
    }

    cout << counter;
}