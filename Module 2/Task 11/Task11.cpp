// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> speed(std::cin);
	std::istream_iterator<int> time(std::cin);

	int s = *speed * *time;
	std::cout << (109 + s % 109) % 109;
	return 0;
}