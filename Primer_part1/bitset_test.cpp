/*
 * =====================================================================================
 *
 *       Filename:  bitset_test.cpp
 *
 *    Description:  bitset练习
 *
 *        Version:  1.0
 *        Created:  2013年12月05日 09时49分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */
#include <iostream>
#include <bitset>


int main(int argc, char *argv[])
{
	std::bitset<32> bv;
	int x = 0;
	int y = 1;
	int z;
	z = x + y;

	while (z <= 21) {
		bv.set(z);
		x = y;
		y = z;
		z = x + y;
	}
	std::cout << "bv = " << bv << std::endl;

	return 0;
}


