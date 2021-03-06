// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> inputSeconds(std::cin);
	int hours = *inputSeconds / 3600 % 24;
	int minutes = *inputSeconds / 60 % 60;
	int seconds = *inputSeconds % 60;

	std::cout << hours << ":" << minutes / 10 << minutes % 10 << ":" << seconds / 10 << seconds % 10 << std::endl;
	return 0;
}