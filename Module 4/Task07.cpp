#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i;
    double sumPow = 0;
    double sum = 0;
    int count = 0;
    while (true) {
        cin >> i;
        if (i == 0) {
            break;
        }

        sumPow += i*i;
        sum += i;
        count += 1;
    }
    sum = sum * sum;
    cout << setprecision(11) << sqrt((sumPow - (sum / count)) / (count - 1));
}