#include <iostream>

using namespace std;

int main() {
    int next;
    int prev;

    int tempCounter = 1;
    int counter = 1;

    while(true) {
        cin >> next;
        if (next == 0) {
            break;
        }

        if (next == prev) {
            tempCounter += 1;
        } else {
            if (tempCounter > counter) {
                counter = tempCounter;
            }
            tempCounter = 1;
        }

        prev = next;
    }

    cout << (counter > tempCounter ? counter : tempCounter);
}