#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, prev;
    cin >> n;

    prev = 0;

    while (n--) {
        int current;
        cin >> current;
        if (((current > 0) - (current < 0)) == ((prev > 0) - (prev < 0))) {
            if (prev > current) {
                cout << current << " " << prev;
            } else {
                cout << prev << " " << current;
            }
            break;
        }
        prev = current;
    }
}