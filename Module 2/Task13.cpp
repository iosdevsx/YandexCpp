#include <iostream>

using namespace std;

int main() {
    int a,b,c, temp;
    cin >> a >> b >> c;

    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }
    if (b > c) {
        temp = c;
        c = b;
        b = temp;
    }
    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }
    cout << a << " " << b << " " << c;
}