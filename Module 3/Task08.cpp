#include <iostream>

using namespace std;

int main() {
    int next;
    int max = 0;
    int counter = 1;
    while(true) {
        cin >> next;
        if (next == 0) {
            break;
        }

        if (max == next) {
            counter += 1;
        } else if (next > max) {
            max = next;
            counter = 1;
        }
    }

    cout << counter;
}