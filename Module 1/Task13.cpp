#include <iostream>

int main() {
    int n;
    cin >> n;
	int firstPart = n / 100;
	int temp = n % 100;
	int secondPart = (temp % 10) * 10 + temp / 10;
	std::cout << firstPart - secondPart + 1;
}
