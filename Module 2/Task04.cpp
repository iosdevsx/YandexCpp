#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < (b + c) && b < (a + c) && c < (b + a)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}