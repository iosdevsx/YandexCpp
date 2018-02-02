#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 1;
    while (true) {
        if (sum > n) {
            cout << "NO";
            break;
        }

        if (sum == n) {
            cout << "YES";
            break;
        }

        sum *= 2;
    }
}