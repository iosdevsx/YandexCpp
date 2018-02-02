#include <iostream>

using namespace std;

int main() {
    int next;
    int sum = 0;
    while(true) {
        cin >> next;
        if (next == 0) {
            break;
        }
        sum += next;
    }

    cout << sum;
}