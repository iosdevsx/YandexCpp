#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> n(std::cin);
	std::cout << (*n / 2 + 1) * 2;
	return 0;
}