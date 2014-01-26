/*
 * =====================================================================================
 *
 *       Filename:  random.cpp
 *
 *    Description:  随机数类的实现
 *
 *        Version:  1.0
 *        Created:  2014年01月26日 18时18分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include "random.h"
#include <ctime>

Random::Random(unsigned long seed) : _seed(seed)
{
	if (seed == 0) {
		_seed = time(NULL);
	}

	randomize();
}

void Random::reset_seed(unsigned long seed)
{
	_seed = seed;
	if (seed == 0) {
		_seed = time(NULL);
	}
	randomize();
}

int Random::integer(unsigned long hi, unsigned long lo)
{
	// return a random integer in the range lo to hi
	randomize();
	return (_seed / 10) % (hi - lo + 1) + lo;
}

double Random::real()
{
	// return a random real number in the range 0.0 to 1.0
	randomize();
	return double(_seed) / ULONG_MAX;
}

void Random::randomize()
{
	_seed = (1103515245 * _seed + 123456789) & ULONG_MAX;
}

