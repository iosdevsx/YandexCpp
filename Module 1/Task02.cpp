#include "stdafx.h"
#include <iterator>
#include <iostream>

int main() {
	std::istream_iterator<int> n(std::cin);
	std::istream_iterator<int> k(std::cin);
	std::cout << *k % *n;
    return 0;
}