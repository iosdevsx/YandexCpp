#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> x(8);
    vector <int> y(8);
    for (int i = 0; i < 8; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            int deltaX = x[j] - x[i];
            int deltaY = y[j] - y[i];
            if ((deltaX * deltaX == deltaY *deltaY) || (x[i] == x[j] || y[i] == y[j])) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}