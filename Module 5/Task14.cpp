#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector <int> x(n);

    for (int i = 0; i < n; i++) {
        x[i] = 1;
    }

    for (int i = 0; i < k; i++) {
        int from,to;
        cin >> from >> to;
        for (int j = from - 1; j < to; j++) {
            x[j] = 0;
        }
    }

    for (auto i : x) {
        if (i == 1) {
            cout << "I";
        } else {
            cout << ".";
        }
    }
}