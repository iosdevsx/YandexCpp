#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    int count = 1;
    int offset = 0;
    int x = 0;
    int y = 0;

    while (count <= n * m) {
        for (int i = offset; i < m - offset && count <= n * m; i++) {
            y = i;
            a[x][y] = count++;
        }
        for (int i = offset + 1; i < n - offset && count <= n * m; i++) {
            x += 1;
            a[x][y] = count++;
        }
        for (int i = offset + 1; i < m - offset && count <= n * m; i++) {
            y -= 1;
            a[x][y] = count++;
        }
        for (int i = offset + 2; i < n - offset && count <= n * m; i++) {
            x -= 1;
            a[x][y] = count++;
        }
        offset++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}