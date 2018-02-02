#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int di = y2 - y1;
    int dj = x2 - x1;
    if ((di*di == dj*dj) || (y1 == y2 || x1 == x2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}