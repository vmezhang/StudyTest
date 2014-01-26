/*
 * =====================================================================================
 *
 *       Filename:  randomtest.cpp
 *
 *    Description:  Random类的测试驱动程序
 *
 *        Version:  1.0
 *        Created:  2014年01月26日 18时29分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include "random.h"

int main()
{
	Random random;
	unsigned long seed = 100;
	unsigned long hi = 4;
	unsigned long lo = 0;

	for (int i = 0; i < 25; i++) {
		std::cout << random.integer(seed) << " ";
	}
	std::cout << "\n";

	for (int i = 0; i < 8; i++) {
		std::cout << random.real() << " ";
	}
	std::cout << "\n";

	int count[5] = {0};
	for (int j = 0; j < 100000; j++) {
		++count[random.integer(hi, lo)];
	}
	for (int i = 0; i < 5; i++) {
		std::cout << "count[" << i << "] = " << count[i] << "\n";
	}

	return 0;
}

