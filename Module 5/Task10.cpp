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

    cout << a[a.size() - 1] << " ";
    if (a.size() > 1) {
        for (int i = 0; i < a.size() - 1; i++) {
            cout << a[i] << " ";
        }
    }
}