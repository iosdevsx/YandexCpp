#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> a(std::cin);
	std::istream_iterator<int> b(std::cin);
	std::istream_iterator<int> n(std::cin);

	std::cout << (*a * 100 + *b) * *n / 100 << " " << (*a * 100 + *b) * *n % 100;

	return 0;
}