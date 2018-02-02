#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, prev, count;
    cin >> n;

    vector <int> a;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < a.size(); i++) {
        if (i + 1 == a.size()) {
            break;
        }
        if (i % 2 == 0) {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    for (auto i : a) {
        cout << i << " ";
    }
}