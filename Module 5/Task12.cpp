#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, count;
    cin >> n;

    vector <int> a;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < a.size(); i++) {
        count = 1;
        for (int j = 0; j < a.size(); j++) {
            if (a[i] == a[j] && i != j) {
                count += 1;
                break;
            }
        }
        if (count == 1) {
            cout << a[i] << " ";
        }
    }
}