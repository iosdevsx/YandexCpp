#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, prev, count;
    cin >> n;

    count = 0;

    while (n--) {
        int temp;
        cin >> temp;
        if (temp != prev) {
            count += 1;
            prev = temp;
        }
    }

    cout << count;

}