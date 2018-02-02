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

    int numberOfPairs = 0;

    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j]) {
                numberOfPairs += 1;
            }
        }
    }

    cout << numberOfPairs;
}