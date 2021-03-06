// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iterator>

int main() {
	std::istream_iterator<int> firstHours(std::cin);
	std::istream_iterator<int> firstMinutes(std::cin);
	std::istream_iterator<int> firstSeconds(std::cin);

	std::istream_iterator<int> secondHours(std::cin);
	std::istream_iterator<int> secondMinutes(std::cin);
	std::istream_iterator<int> secondSeconds(std::cin);

	int firstMoment = *firstHours * 3600 + *firstMinutes * 60 + *firstSeconds;
	int secondMoment = *secondHours * 3600 + *secondMinutes * 60 + *secondSeconds;

	std::cout << secondMoment - firstMoment;
	return 0;
}