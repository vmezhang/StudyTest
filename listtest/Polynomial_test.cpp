/*
 * =====================================================================================
 *
 *       Filename:  Polynomial_test.cpp
 *
 *    Description: 测试Polynomial类
 *
 *        Version:  1.0
 *        Created:  2014年02月19日 15时16分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include "Polynomial.h"

void print(std::string, Polynomial);

int main()
{
	// p1(x) = 0;
	Polynomial p1;
	print("p1", p1);

	// p1(x) = x ^ 2
	p1 = Polynomial(1.0, 2);
	print("p1", p1);

	// p1(x) = 10x^2
	p1 = 10 * p1;
	print("p1", p1);

	// p2(x) = -x^2
	Polynomial p2(-1.0, 2);
	print("p2", p2);

	// p3(x) = 9x^2
	Polynomial p3 = p1 + p2;
	print("p3", p3);

	// p3(x) = 0
	p3 = p1 + 10 * p2;
	print("p3", p3);

	// p4(x) = 4x^7
	Polynomial p4(4.0, 7);
	print("p4", p4);

	//p3(x) = 4x^7 - x^2
	p3 = p2 + p4;
	print("p3", p3);

	// p2(x) = 0;
	p2 = Polynomial::ZERO;
	print("p2", p2);

	return 0;
}

void print(std::string name, Polynomial p)
{
	std::cout << name << "(x) = " <<p;
	std::cout << "\tdegree=" << p.degree() << ", terms=" << p.terms()
		<< ", " << name << "(2.0)=" << p(2.0) << std::endl;
}

