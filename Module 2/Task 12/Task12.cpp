// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> n(std::cin);
	int firstPart = *n / 100;
	int temp = *n % 100;
	int secondPart = (temp % 10) * 10 + temp / 10;
	std::cout << firstPart - secondPart + 1;

	return 0;
}