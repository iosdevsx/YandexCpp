#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> a;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp % 2 != 0) {
            a.push_back(temp);
        }
    }

    int size = a.size();
    if (size == 0) {
        cout << 0;
    } else {
        int min = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] < a[min]) {
                min = i;
            }
        }
        cout << a[min];
    }
}