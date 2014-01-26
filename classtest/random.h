/*
 * =====================================================================================
 *
 *       Filename:  random.h
 *
 *    Description:  用于产生随机数的类
 *
 *        Version:  1.0
 *        Created:  2014年01月26日 18时06分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <limits.h>

class Random
{
	public:
		Random(unsigned long = 0);
		void reset_seed(unsigned long = 0);
		int integer(unsigned long = ULONG_MAX, unsigned long = 1);
		double real();
	private:
		unsigned long _seed;
		void randomize();
};

#endif // RANDOM_H

