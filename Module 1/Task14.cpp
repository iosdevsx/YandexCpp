// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> h(std::cin);
	std::istream_iterator<int> a(std::cin);
	std::istream_iterator<int> b(std::cin);

	int firstDay = *h - *a;
	int delta = *a - *b;

	std::cout << (firstDay + delta - 1) / delta + 1;
	return 0;
}