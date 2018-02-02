#include <iostream>

using namespace std;

int main() {
    int next;
    int max = 0;
    while(true) {
        cin >> next;
        if (next == 0) {
            break;
        }

        if (next > max) {
            max = next;
        }
    }

    cout << max;
}