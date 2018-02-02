#include <iostream>

using namespace std;

int main() {
    int m,n,x,y;
    cin >> m >> n >> x >> y;
    if (n > m) {
        m = m + n;
        n = m - n;
        m = m - n;
    }

    int i,j;
    i = n - x;
    j = m - y;

    int min1, min2;

    min1 = i < x ? i : x;
    min2 = j < y ? j : y;

    cout << (min1 < min2 ? min1 : min2);
}