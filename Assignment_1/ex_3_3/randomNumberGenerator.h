#pragma once
#include <random>

int getRandomNumber(int from, int to)
{
		std::random_device rd; // obtain a random number from hardware
		std::mt19937 eng(rd()); // seed the generator
		std::uniform_int_distribution<> distr(from, to); // define the range

		return distr(eng);// generate numbers
}
