#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> n(std::cin);
	std::cout << *n / 10;
	return 0;
}

