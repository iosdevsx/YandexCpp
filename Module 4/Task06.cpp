#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i;
    double sum = 0;
    double count = 0;
    while (true) {
        cin >> i;
        if (i == 0) {
            break;
        }
        sum += i;
        count += 1;
    }

    cout << setprecision(11) << sum / count;
}