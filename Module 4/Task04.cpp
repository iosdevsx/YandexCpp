#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int p, x, y;
    cin >> p >> x >> y;
    int total = x * 100 + y;
    int percent = (total * p) / 100;
    int sum = total + percent;
    cout << sum / 100 << " " << sum % 100;
}