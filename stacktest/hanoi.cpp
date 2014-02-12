/*
 * =====================================================================================
 *
 *       Filename:  hanoi.cpp
 *
 *    Description:  迭代式汉诺塔(利用栈实现非递归)
 *
 *        Version:  1.0
 *        Created:  2014年02月12日 18时42分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */
#include <iostream>
#include <stack>

struct Quad {
	Quad();
	Quad(int n, char a, char b, char c): _n(n), _x(a), _y(b), _z(c) {
	}
	int _n; 		// 要移动的盘子数量
	char _x, _y, _z; 	// 保存柱子名称
}; // 保存当前状态

void hanoi(int, char, char, char);

int main(int argc, char *argv[])
{
	hanoi(3, 'A', 'B', 'C');

	return 0;
}

void hanoi(int n, char x, char y, char z)
{
	std::stack<Quad> s;
	s.push(Quad(n, x, y, z));
	while (!s.empty()) {
		Quad q = s.top();
		s.pop();
		n = q._n;
		x = q._x;
		y = q._y;
		z = q._z;
		if (n == 1) {
			std::cout << "Move top disk from peg " << q._x
				 << " to peg " << q._z << "\n";
		}
		else {
			s.push(Quad(n - 1, y, x, z));
			s.push(Quad(1, x, y, z));
			s.push(Quad(n - 1, x, z, y));
		}
	}
}
