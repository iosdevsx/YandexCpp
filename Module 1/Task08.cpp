#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> a(std::cin);
	std::istream_iterator<int> b(std::cin);
	std::istream_iterator<int> c(std::cin);

	std::cout << *a % 2 + *a / 2 + *b % 2 + *b / 2 + *c % 2 + *c / 2;
	return 0;
}