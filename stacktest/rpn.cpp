/*
 * =====================================================================================
 *
 *       Filename:  rpn.cpp
 *
 *    Description:  解析后缀表达式即RPN计算器
 *
 *        Version:  1.0
 *        Created:  2014年02月10日 23时21分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangrui, v.mezhang@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include <iostream>
#include <sstream>
#include <stack>


int main(int argc, char *argv[])
{
	std::stack<char> oprtr;
	std::stack<double> oprnd;
	std::string input;
	bool quit = false;
	double x, y;

	while (!quit) {
		std::cout << "RPN> ";
		std::cin >> input;
		switch (input[0]) {
			case 'Q': case 'q':
				quit = true;
				break;
			case '+':
				y = oprnd.top();
				oprnd.pop();
				x = oprnd.top();
				oprnd.pop();
				std::cout << "\t" << x << "+" << y << "=" << x + y << "\n";
				oprnd.push(x + y);
				break;
			case '-':
				y = oprnd.top();
				oprnd.pop();
				x = oprnd.top();
				oprnd.pop();
				std::cout << "\t" << x << "-" << y << "=" << x - y << "\n";
				oprnd.push(x - y);
				break;
			case '*':
				y = oprnd.top();
				oprnd.pop();
				x = oprnd.top();
				oprnd.pop();
				std::cout << "\t" << x << "*" << y << "=" << x * y << "\n";
				oprnd.push(x * y);
				break;
			case '/':
				y = oprnd.top();
				oprnd.pop();
				x = oprnd.top();
				oprnd.pop();
				std::cout << "\t" << x << "/" << y << "=" << x / y << "\n";
				oprnd.push(x / y);
				break;
			default:
				std::istringstream in(input);
				in >> x;
				oprnd.push(x);
		}
	}

	return 0;
}


