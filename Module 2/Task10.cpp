#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int deltaI = y2 - y1;
    int deltaJ = x2 - x1;
    int totalDelta = deltaI*deltaI + deltaJ*deltaJ;
    if (totalDelta == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}