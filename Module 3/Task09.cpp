#include <iostream>

using namespace std;

int main() {
    int next;
    int max = 0;
    int secondMax = 0;
    while(true) {
        cin >> next;
        if (next == 0) {
            break;
        }

        if (next > max) {
            secondMax = max;
            max = next;
        } else if (next > secondMax) {
            secondMax = next;
        }
    }

    cout << secondMax;
}